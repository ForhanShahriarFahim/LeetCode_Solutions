class Solution {
public:
    // TC: O(N) | SC: O(26)
    int characterReplacement(string s, int k) {
        int l = 0, r = 0, maxL = 0, maxF = 0;
        int hashmap[26] = {0};
        while(r<s.size()){
            hashmap[s[r]-'A']++;
            maxF = max(maxF, hashmap[s[r]-'A']);
            if((r-l+1) - maxF>k){
                hashmap[s[l]-'A']--;
                l++;
            }
            if((r-l+1)-maxF<=k)
                maxL = max(maxL, r-l+1);
            r++;
        }
        return maxL;
    }
};