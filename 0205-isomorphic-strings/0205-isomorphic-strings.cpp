class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<char>indS(128,-1);
        vector<char>indT(128,-1);
        if(s.length()!=t.length()) return false;
        for(int i = 0;i<s.size();i++){
            if(indS[s[i]]!=indT[t[i]]) return false;
            indS[s[i]] = i;
            indT[t[i]] = i;
        }
        return true;
    }
};