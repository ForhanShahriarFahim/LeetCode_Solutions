class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1, st2;
        for(int i = 0;i<s.size();i++){
            if(isalpha(s[i])){
                st1.push(s[i]);
            }
            else if(s[i] == '#'){
                if(!st1.empty())
                    st1.pop();
            }
        }

        for(int i = 0;i<t.size();i++){
            if(isalpha(t[i])){
                st2.push(t[i]);
            }
            else if(t[i] == '#'){
                if(!st2.empty())
                    st2.pop();
            }
        }
        

        while(!st1.empty() && !st2.empty()){            
            if(st1.top() == st2.top()){
                st1.pop();
                st2.pop();
            }
            else{
                return false;
            }
            
        }
        if(!st1.empty() || !st2.empty()){
            return false;
        }
        else return true;


    }
};