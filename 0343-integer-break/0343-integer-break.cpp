class Solution {
public:
    int integerBreak(int n) {
        int mod3 = n%3;
        if(n == 2) return 1;
        if(n == 3) return 2;
        if(mod3 == 0){
            return int(pow(3, n/3));
        }
        else if(mod3 == 2){
            return int(pow(3, n/3))*2;
        }
        else {
            return int(pow(3, (n/3)-1))*4;
        }

    }
};