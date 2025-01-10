class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int>prefixSum;
        int ans = 0, sum = 0;
        prefixSum[0] = 1;
        for(int i = 0;i<nums.size();i++){
            sum += nums[i];
            int rem = sum % k;
            if(rem < 0){
                rem +=k;
            }
            ans+= prefixSum[rem];
            prefixSum[rem]++;
        }
        return ans;
    }
};