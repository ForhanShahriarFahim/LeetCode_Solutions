class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minNum = INT_MAX, maxProfit = INT_MIN;
        for(int i = 0;i<prices.size();i++){
            minNum = min(prices[i], minNum);
            maxProfit = max(maxProfit, prices[i]-minNum);
        }
        if(maxProfit!=INT_MAX){
            return maxProfit;
        }
        else {
            return 0;
        }
    }

};