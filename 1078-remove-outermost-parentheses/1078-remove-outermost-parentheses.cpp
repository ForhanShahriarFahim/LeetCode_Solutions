class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string ans;
        for(auto x:s){
            if(x=='('){
                count++;  
                if(count>1) ans+=x;              
            }
            else{
                count--;
                if(count>0)ans+=x;
            }
        }
        return ans;
    }
};