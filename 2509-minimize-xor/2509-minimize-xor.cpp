class Solution {
public:
    int bitCnt(int n){
        int cnt = 0;
        while(n){
            n = n & (n - 1);
            cnt++;
        }
        return cnt;        
    }
    int isSetCheck(int n, int bit){
        return n & (1<<bit);
    }
    int setBitF(int &n, int bit){
        return n |= (1<<bit);
    }
    int unSet(int &n, int bit){
        return n&=~(1<<bit);
    }
    int minimizeXor(int num1, int num2) {
        int res = num1;
        int targetBit = bitCnt(num2);
        int setBit = bitCnt(num1);
        cout<<targetBit<<" "<<setBit<<endl;
        int bitCnt = 0;
        while(setBit < targetBit){
            if(!isSetCheck(res, bitCnt)){
                setBitF(res, bitCnt);
                setBit++;
            }
            bitCnt++;
        }
        while(targetBit < setBit){
            if(isSetCheck(res, bitCnt)){
                unSet(res, bitCnt);
                setBit--;
            }
            bitCnt++;
        }
        return res;
    }
};