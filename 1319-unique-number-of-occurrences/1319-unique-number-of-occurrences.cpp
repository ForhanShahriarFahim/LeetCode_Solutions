class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int>mp;
        for(auto x:arr){
            mp[x]++;
        }
        unordered_map<int,int>ans;
        for(auto&x:mp){
            ans[x.second]++;
            if(ans[x.second]>1)return false;
        }
        return true;
    }
};