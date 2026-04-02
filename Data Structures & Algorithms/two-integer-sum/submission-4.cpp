class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int ,int> result;
        std::vector<int> vector1;
        for (int i = 0; i <= nums.size() - 1 ; i++)
        { 
            result[target - nums[i]] = i;
        }
        for (int i = 0; i <= nums.size() - 1; i++)
        {
            if(result.count(nums[i]) && i != result[nums[i]])
            {
                vector1.push_back(i);
                vector1.push_back(result[nums[i]]);
                return vector1;
            }
        }
        return vector1;
    }
};
