class Solution {
public:
    int dp[51][51][101], n,m,k;
    int solve(int idx, int lenLis, int lar){
        if(idx == n){
            if(lenLis == k){
                return 1;
            }
            return 0;
        }
        if(dp[idx][lenLis][lar]!=-1)return dp[idx][lenLis][lar];
        int ans = 0;
        for(int i=1;i<=m;i++){
            if(i>lar){
                ans+=solve(idx+1, lenLis+1, i);
            }else {
                ans+=solve(idx+1,lenLis, lar);
            }
            ans = ans%1000000007;
        }
        return dp[idx][lenLis][lar] = ans;
    }
    int numOfArrays(int N, int M, int K) {
        n = N;
        m = M;
        k = K;
        memset(dp,-1, sizeof(dp));
        return solve(0,0,0);
    }
};