class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int ans = 0;
        for(int i = 0;i<n;i++){
            unordered_map<char,int>mp;            
            for(int j = i;j<n;j++){
                int maxVal = 0, minVal = INT_MAX; 
                mp[s[j]]++;
                for(auto &x:mp){
                    maxVal = max(maxVal, x.second);
                    minVal = min(minVal,x.second);
                }
                ans+=maxVal-minVal;
            }
        }
        return ans;
    }
};