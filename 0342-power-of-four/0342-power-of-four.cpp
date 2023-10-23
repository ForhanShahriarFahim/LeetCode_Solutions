class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 1) return true;
        else if(n%4!=0 || n<1) return false;
        while(true){
            n/=4;
            if(n == 1 && n%4 == 1) return true;
            else if((n<4 && n%4!=1) || (n>4 && n%4!=0) ) return false;    
        }
        return false;
    }
};