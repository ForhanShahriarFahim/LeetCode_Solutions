class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>mp(nums1.begin(), nums1.end());
        vector<int>ans;
        for(auto x:nums2){
            if(mp.count(x)){
                ans.push_back(x);
                mp.erase(x);
            }
        }
        return ans;
    }
};