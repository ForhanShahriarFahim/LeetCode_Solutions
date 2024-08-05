class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        string ans="";
        for(int i = n-1;i>=0;i--){
            int number = num[i]-'0';
            if(number%2){
                ans = num.substr(0,i+1);
                break;
            }
        }
        return ans;
    }
};