// nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4}
// dp   = {-2, 1, -2, 4,  3, 5, 6,  1, 5}

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