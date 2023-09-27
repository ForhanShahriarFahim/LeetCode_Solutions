class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long length = 0;
        for(auto x:s){
            if(isdigit(x)){
                length*=(x-'0');
            }
            else {
                length++;
            }
        }
        for(int i = s.length()-1;i>=0;i--){
            if(isdigit(s[i])){
                length/=(s[i]-'0');
                k%=length;
            }else{
                if(k == 0 || k == length){
                    return string("")+s[i];
                }
                length--;
            }
        }
        return "";

    }
};