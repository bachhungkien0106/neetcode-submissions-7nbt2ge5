class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // int product = 1;
        vector<int> vec;
        for(int x = 0 ; x < nums.size(); x++){
            int product = 1;
            for(int y = 0; y < nums.size(); y++){
                if(y != x){
                    product *= nums[y];
                }
            }
            vec.push_back(product);
        }
        return vec;
    }
};
