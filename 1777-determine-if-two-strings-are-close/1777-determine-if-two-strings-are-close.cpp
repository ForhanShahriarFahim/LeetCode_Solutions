class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<int, int>mp1, mp2;
        for(int i = 0;i<word1.size();i++){
            mp1[word1[i]]++;
        }
        for(int i = 0;i<word2.size();i++){
            mp2[word2[i]]++;
        }
        multiset<int>v1,v2;
        set<int>s1,s2;
        for(auto &x:mp1){
            v1.insert(x.second);
            s1.insert(x.first);
        }
        for(auto &x:mp2){
            v2.insert(x.second);
            s2.insert(x.first);
        }
        return v1 == v2 && s1 == s2;
    }
};