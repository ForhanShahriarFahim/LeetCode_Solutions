class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string ans;
        stack<char>st;
        for(auto x:s){
            if(x=='('){
                if(st.size()>0){
                    ans+=x;
                }
                st.push(x);              
            }
            else{
                if(st.size()>1){
                    ans+=x;
                }
                st.pop();
            }
        }
        return ans;
    }
};