class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long long int prefixSum = 0, sum = 0;
        for(int x:nums) sum+=x;
        for(int i = 0;i<nums.size();i++){
            int temp = sum-prefixSum-nums[i];
            if(prefixSum == temp) return i;
            prefixSum+=nums[i];
        }
        return -1;
    }
};