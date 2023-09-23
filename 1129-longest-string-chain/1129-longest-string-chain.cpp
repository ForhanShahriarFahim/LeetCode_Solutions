class Solution {
public:
    static bool cmp(const string &s1, const string &s2){
        return s1.length()<s2.length();
    }
    int longestStrChain(vector<string>& words) {
        unordered_map<string, int>ump;
        sort(words.begin(), words.end(),cmp);
        int ans = 0, longest = 0;
        for(string x:words){
            longest = 0;
            for(int i = 0;i<x.length();i++){
                string s = x;
                s.erase(i,1);
                longest = max(longest, ump[s]+1);
            }
            ump[x] = longest;
            ans = max(ans, longest);
        }
        return ans;
    }
};