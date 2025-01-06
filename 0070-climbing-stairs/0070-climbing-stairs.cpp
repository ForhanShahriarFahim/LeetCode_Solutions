class Solution {
public:
    int topDown(int n, vector<int>&dp){
        
        if(n<2) return 1;
        if(dp[n]!=-1) return dp[n];
        return dp[n] = topDown(n - 1, dp) + topDown(n - 2, dp);
    }
     
    int climbStairs(int n) {  
        // bottom up
        // vector<int>dp(n+2, 0);    
        // dp[1] = 1;
        // dp[2] = 2;
        // for(int i=3;i<=n;i++){
        //     dp[i] = dp[i - 1] + dp[i - 2];
        // }  
        // return dp[n];    

        // Top Down
        vector<int>dp(n + 1, -1);
        return topDown(n, dp);
    }
};