from collections import defaultdict
from typing import List

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        # This map will hold: { (vector_tuple): [word1, word2] }
        ans = defaultdict(list)
        
        for s in strs:
            # Step 1: Create the 26-slot vector
            count = [0] * 26
            
            # Step 2: Fill the buckets
            for char in s:
                # 97 is the ord() of 'a'
                count[ord(char) - 97] += 1
            
            # Step 3 & 4: Convert to tuple and add to the group
            # We must use tuple() because lists are mutable and can't be keys
            ans[tuple(count)].append(s)
            
        # Return all the groups as a list of lists
        return list(ans.values())