class Solution {
public:
    int nextNumber(int n){
        int nextNum = 0;
        while(n!=0){
            int num = n%10;
            nextNum+=num*num;
            n/=10;
        }
        return nextNum;
    }
    bool isHappy(int n) {
        unordered_set<int>s;
        while(n!=1 && !s.count(n)){
            s.insert(n);
            n = nextNumber(n);
        }
        return n == 1;
    }
};