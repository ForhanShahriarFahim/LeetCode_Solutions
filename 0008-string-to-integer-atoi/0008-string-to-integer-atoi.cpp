class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        if(n == 0) return 0;
        int i = 0;
        while(i<n && s[i] == ' ') i++;
        bool isNegative = false;
        if(s[i] == '-') {
            isNegative = true;
            i++;
        }else if(s[i] == '+') i++;
        int result = 0;
        while(i<n && isDigit(s[i])){
            int digit = s[i]-'0';
            if(result>INT_MAX/10 || (result == (INT_MAX/10) && digit>7))
                return isNegative? INT_MIN : INT_MAX;
            
            result = (result*10) + digit;
            i++;
        }
        return isNegative? -result:result;
    }
    private:
        bool isDigit(char ch){
            return ch>='0' && ch<='9';
        }
};