class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int l = k, r = k;
        int n = nums.size()-1;
        int mnV = nums[k], mxS = nums[k];
        while(l>0 || r<n){
            if(l == 0 || (r<n && nums[r+1]>nums[l-1])) r++;
            else l--;
            mnV = min(mnV, min(nums[l], nums[r]));
            mxS = max(mxS, (mnV*(r-l+1)));
        }
        return mxS;
    }
};