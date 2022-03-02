class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> dp = nums;
        for(int i = 1; i < size(nums); i++) 
            dp[i] = max(nums[i], nums[i] + dp[i-1]);
        int sum = *max_element(dp.begin(), dp.end());
        return  sum;
    }
};