class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN, suffix = 1, prefix = 1,n = nums.size();
        for(int i = 0;i<nums.size();i++){
            if(prefix == 0) prefix = 1;
            if(suffix == 0) suffix = 1;
            prefix*=nums[i];
            suffix*=nums[n-i-1];
            ans = max(ans, max(suffix, prefix));
        }
        return ans;
    }
    
    
};