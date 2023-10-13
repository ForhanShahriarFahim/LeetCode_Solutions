class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int previous1 = 0;
        int previous2 = 0;
        for(int i = 2;i<=n;i++){
            int currentValue = min(previous1+cost[i-1], previous2+cost[i-2]);
            previous2 = previous1;
            previous1 = currentValue;
        }
        return previous1;
    }
};