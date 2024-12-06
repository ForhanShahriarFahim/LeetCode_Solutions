class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_map<int, int>mp;
        for(auto x: banned){
            mp[x] = 1;
        }
        int sum = 0, cnt = 0;
        for(int i = 1;i<=n;i++){
            if(mp.find(i)==mp.end()){
                if(sum+i<=maxSum){
                    sum+=i;
                    cnt++;
                }
            }
        }
        return cnt;
    }
};