class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ans1, ans2;
        for(int i = 0;i<s.size();i++){
            if(s[i] == '#' && ans1.size()>0) ans1.pop_back();
            else if(s[i]!='#') ans1+=s[i];
        }
        for(int i = 0;i<t.size();i++){
            if(t[i] == '#' && ans2.size()>0) ans2.pop_back();
            else if(t[i]!='#') ans2+=t[i];
        }
        if(ans1 == ans2) return true;
        else return false;
    }
};