class Solution {
public:
    int maxVowels(string s, int k) {
        int left = 0, right = 0;
        int ans = 0, cnt = 0;
        while(right<s.size()){
            if(s[right] == 'a' || s[right] == 'e' || s[right] == 'i' || s[right] == 'o' || s[right] == 'u'){
                cnt++;
            }
            if(right-left+1 == k){
                ans = max(ans, cnt);
                if(s[left] == 'a'||s[left] == 'e' || s[left] == 'i' || s[left] == 'o' || s[left] == 'u'){
                    cnt--;
                }
                left++;
                
            }
            right++;
        }
        return ans;
    }
};