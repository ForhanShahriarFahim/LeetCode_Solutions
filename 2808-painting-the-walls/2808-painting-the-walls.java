class Solution {
    int[][] dp;
    private int solve(int[]cost, int[] time, int curr, int wallRemaining){
        if(wallRemaining<=0){
            return 0;
        }
        if(curr >= cost.length){
            return 2000000000;
        }
        if(dp[curr][wallRemaining]!=-1){
            return dp[curr][wallRemaining];
        }
        int take = cost[curr] + solve(cost, time, curr+1, wallRemaining - time[curr]-1);
        int dontTake = solve(cost, time, curr+1, wallRemaining);

        return dp[curr][wallRemaining] = Math.min(take, dontTake);
    }
    public int paintWalls(int[] cost, int[] time) {
        dp = new int[501][501];
        for(int i=0;i<cost.length+1;i++){
            Arrays.fill(dp[i], -1);
        }
        return solve(cost, time, 0, cost.length);
    }
}