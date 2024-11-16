class Solution {
public:
    const long long MOD = 1e9 + 7;
    long long modPow(long long base, long exp, int mod){
        long long result = 1;
        while(exp>0){
            if(exp%2){
                result = (result * base) % MOD;
                exp--;
            }else {
                base = (base * base) % MOD;
                exp/=2;
            }
        }
        return result;
    }
    int countGoodNumbers(long long n) {
        long long ans;        
        if(n%2 == 0){
            ans = (modPow(5, n/2, MOD) * modPow(4, n/2, MOD)) % MOD;          
        } 
        else {
            ans = (modPow(5, n/2 + 1, MOD) * modPow(4, n/2, MOD)) % MOD; 
        }
        return ans;
    }
};