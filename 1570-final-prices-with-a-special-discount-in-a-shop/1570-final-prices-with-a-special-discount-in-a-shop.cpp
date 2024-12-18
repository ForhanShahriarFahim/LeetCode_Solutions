class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int>s;
        for(int i = 0;i<prices.size();i++){
            while(!s.empty() && prices[s.top()]>=prices[i]){
                int j = s.top();
                s.pop();
                prices[j]-=prices[i];
            }
            s.push(i);
        }
        return prices;
    }
};