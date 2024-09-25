
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1, t1;
        for(int i = 0;i<s.size();i++){
            if(s[i] == '#'){
                if(s1.size() == 0) continue;
                s1.pop_back();
            }
            else s1+=s[i];
        }
        for(int i = 0;i<t.size();i++){
            if(t[i] == '#'){
                if(t1.size() == 0) continue;
                t1.pop_back();
            }
            else t1+=t[i];
        }
        if(s1 == t1) return true;
        else return false;
    }
};