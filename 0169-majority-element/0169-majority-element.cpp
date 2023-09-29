class Solution {
public:
    static bool cmp(pair<int,int>& a, pair<int, int>& b){
        return a.second<b.second;
    }
    int majorityElement(vector<int>& nums) {
        map<int,int>v;
        for(int i = 0;i<nums.size();i++){
            v[nums[i]]++;
        }
        vector<pair<int,int>>A;
        for(auto& it:v){
            A.push_back(it);
        }
        sort(A.begin(), A.end(), cmp);
        return A[A.size()-1].first;
    }
};