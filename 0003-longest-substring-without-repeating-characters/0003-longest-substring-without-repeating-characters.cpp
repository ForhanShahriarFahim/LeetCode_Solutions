class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>uset;
        int i = 0, j = 0, n = s.size(), ans = 0;
        while(i<n && j<n){
            if(uset.find(s[j]) == uset.end()){
                uset.insert(s[j++]);
                ans = max(ans,j-i);
            }
            else{
                uset.erase(s[i++]);
            }
        }
        return ans;
    }
};