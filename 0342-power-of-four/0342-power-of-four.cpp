class Solution {
public:
    bool isPowerOfFour(int n) {
        //return (n>0) && ((n&(n-1)) == 0) && (n%3 == 1);
        return (n>0) && ((n&(n-1)) == 0) && ((n&0xaaaaaaaa) == 0);
        // if(n<1) return false;
        // int num = n, count = 0;
        // while(num>1){
        //     num>>=2;
        //     count +=2;
        // }
        // return (num<<count) == n;
        
    }
};