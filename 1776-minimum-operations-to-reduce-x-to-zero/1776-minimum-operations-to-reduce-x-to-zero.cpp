class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int sum = 0;
        unordered_map<int,int>mp;
        for(int i = 0;i<n;i++){
            sum+=nums[i];
            mp[sum] = i;
        }

        if(x>sum)return -1;
        mp[0] = 0;

        int longest = 0;
        sum-=x;
        int value = 0;
        for(int i = 0;i<n;i++){
            value +=nums[i];
            if(mp.count(value-sum)){
                if(value-sum == 0){
                    longest = max(longest, i-mp[value-sum]+1);
                }
                else longest = max(longest, i-mp[value-sum]);
            }
        }
        return longest == 0?(sum==0?n:-1):n-longest;
    }
};