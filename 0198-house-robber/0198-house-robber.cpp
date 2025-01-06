class Solution {
public:
    int maxMoney(vector<int>&nums, vector<int>&dp, int i){
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];
        int pick = nums[i] + maxMoney(nums, dp, i - 2);
        int notPick = maxMoney(nums, dp, i - 1);
        return dp[i] = max(pick, notPick);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(), -1);
        int n = nums.size();
        return max(maxMoney(nums, dp, n - 1),maxMoney(nums, dp, n - 2)); 
    }
};