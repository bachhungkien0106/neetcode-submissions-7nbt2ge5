class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int lastNum = nums[n -1];
        int sumNum = 0;
        for (int x : nums){
            sumNum += x;
        } 
        int expected = n * (n + 1) / 2; 
        cout << "expected: " << expected << endl;
        cout << "lastNum: " << lastNum << endl;
        return expected - sumNum;
    }
};
