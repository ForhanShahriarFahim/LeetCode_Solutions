class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int mxElement = 0, ans = 0, cnt = 0;
        int n = nums.size();
        mxElement = *max_element(nums.begin(), nums.end());
        for(auto &x:nums){
            if(x == mxElement)
                cnt++;          
            else cnt = 0;   
            ans = max(ans, cnt);         
        }
        return ans;        
    }
};