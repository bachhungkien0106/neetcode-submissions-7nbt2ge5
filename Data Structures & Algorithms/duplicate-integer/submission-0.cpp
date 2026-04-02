class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int>counts;
        bool check;
        for(int x : nums)
        {
            cout << "x: " << x << endl;
            check = counts.count(x);
            cout << "check: " << check << endl;
            if (check == 0)
            {
                counts.insert(x);
            }
            else if(check == 1){
                return true;
            }
        }  
        return false;
    }
};