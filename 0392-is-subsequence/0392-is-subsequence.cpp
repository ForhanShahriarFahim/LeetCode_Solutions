class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s1 = 0,t1 = 0;
        int n = t.size();
        for(int i=0;i<n;i++){
            if(t[i] == s[s1])s1++;
        }
        if(s1 == s.size()) return true;
        else return false;
    }
};