class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {        
        int cnt = 0;
        unordered_map<int,int>mp;
        for(int &x:nums){
            cnt+=mp[x]++;
        }
        return cnt;        
    }
};