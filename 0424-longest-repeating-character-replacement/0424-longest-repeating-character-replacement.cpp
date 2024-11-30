class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, r = 0, maxLen = 0, maxF = 0;
        map<int,int>hashmap;
        while(r<s.size()){
            hashmap[s[r]-'A']++;
            maxF = max(maxF, hashmap[s[r]-'A']);
            while((r-l+1) - maxF> k){
                hashmap[s[l]-'A']--;
                maxF = 0;
                for(auto x:hashmap){
                    maxF = max(maxF, x.second);
                }
                l+=1;
            }
            if((r-l+1)-maxF<=k)
                maxLen = max(maxLen, r-l+1);
            r++;
        }
        return maxLen;
    }
};