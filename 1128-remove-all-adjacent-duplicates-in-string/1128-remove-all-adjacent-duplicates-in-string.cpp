class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        ans+=s[0];
        for(int i = 1;i<s.size();i++){
            if(!ans.empty() && s[i] == ans.back()){
                ans.pop_back();
            }
            else {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};