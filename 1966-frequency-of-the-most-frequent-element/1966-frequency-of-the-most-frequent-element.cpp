class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int start = 0, end = 0;
        long currentSum = 0;
        int ans = 1;
        sort(nums.begin(), nums.end());
        while(end<nums.size()){
            currentSum+=nums[end++];
            if(currentSum+k<((long long)nums[end-1]*(end-start))){
                currentSum-=nums[start++];
            }else{
                ans = max(ans, end-start);
            }
        }
        return ans;
    }
};