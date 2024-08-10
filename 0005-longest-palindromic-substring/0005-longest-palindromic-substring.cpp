class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int left, right;
        string LPS = "";
        if(n<=1)return s;
        //odd palindrome
        for(int i = 1;i<n;i++){
            left = i,right = i;
            while(left>=0 && right<n && (s[left] == s[right])){
                left--;
                right++;
            }
            string palindrome = s.substr(left+1, right-left-1);
            if(palindrome.size()>LPS.size()){
                LPS = palindrome;
            }
            
            //even palindrome
            left = i-1, right = i;
            while(left>=0 && right<n && (s[left] == s[right])){
                left--;
                right++;
            }
            palindrome = s.substr(left+1, right-left-1);
            if(palindrome.size()>LPS.size()){
                LPS = palindrome;
            }
        }
        return LPS;
    }
};