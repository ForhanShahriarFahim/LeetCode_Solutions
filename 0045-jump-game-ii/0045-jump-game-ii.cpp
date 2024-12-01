class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0, l = 0, r = 0, n = nums.size();
        while(r<n-1){
            int furthest = 0;
            for(int i = l;i<=r;i++){
                furthest = max(furthest, i + nums[i]);
            }
            l = r+1;
            r = furthest;
            jumps++;   
        }
        return jumps;
    }
};