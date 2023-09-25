class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        s+='A';
        sort(t.begin(), t.end());
        char ans;
        for(int i = 0;i<t.size();i++){
            if(s[i]!=t[i]) {
                ans = t[i];
                break;
            }            
        }
        return ans;

    }
};