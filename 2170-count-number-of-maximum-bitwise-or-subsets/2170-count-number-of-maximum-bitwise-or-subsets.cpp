class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size();
        int maxOr = 0;
        for(int &x:nums){
            maxOr|=x;
        }
        int cnt = 0;
        for(int i = 0;i<(1<<n);i++){
            int orr = 0;
            for(int j = 0;j<n;j++){
                if(i&(1<<j)){
                    orr|=nums[j];
                }
            }
            if(orr == maxOr){
                cnt++;
            }
        }
        return cnt;
    }
};