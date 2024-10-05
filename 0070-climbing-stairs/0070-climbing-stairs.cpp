class Solution {
public:
    int climbStairs(int n) {
        int pre = 1, cur = 1;
        if(n == 0 || n == 1) return 1;
        for(int i = 2;i<=n;i++){
            int temp = cur;
            cur = pre + cur;
            pre = temp;
        }
        return cur;
    }
};