class Solution {
public:
    int integerBreak(int n) {
        int remainder = n%3, quotient = n/3;
        if(n<=3) return n-1;
        if(remainder == 0){
            return pow(3, quotient);
        }
        else if(remainder == 2){
            return pow(3, quotient)*2;
        }
        else {
            return pow(3, quotient-1)*4;
        }

    }
};