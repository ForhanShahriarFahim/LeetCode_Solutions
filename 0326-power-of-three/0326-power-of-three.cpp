class Solution {
public:
    bool isPowerOfThree(int n) {
        long temp = 1;
        while(n>1 && temp<n){
            temp+=temp<<1;
        }
        return temp == n;
    }
};