class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0, zeroCount = 0, ans = 0;
        for(int right = 0;right<nums.size();right++){
            if(!nums[right]) zeroCount++;
            while(zeroCount>1){
                if(nums[left] == 0) zeroCount--;
                left++;
            }
            ans = max(ans, right - left);
        }
        return ans;
    }
};