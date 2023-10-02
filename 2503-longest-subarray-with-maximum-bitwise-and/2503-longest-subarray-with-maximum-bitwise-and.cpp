class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int mxElement = 0, ans = 0, cnt = 0;
        int n = nums.size();
        mxElement = *max_element(nums.begin(), nums.end());
        for(int i = 0;i<n;i++){
            if(nums[i] == mxElement){
                cnt++;
                ans = max(ans, cnt);
            }
            else cnt = 0;            
        }

        return ans;
        
    }
};