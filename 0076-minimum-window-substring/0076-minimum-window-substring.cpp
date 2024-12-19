class Solution {
public:
    string minWindow(string s, string t) {        
        unordered_map<char, int>countT, window;
        pair<int, int>res = {-1, -1};
        for(char ch : t){
            countT[ch]++;
        }
        int resLen = INT_MAX, left = 0, need = countT.size(), have = 0;
        for(int right = 0;right<s.size();right++){
            char ch = s[right];
            window[ch]++;
            if(countT.count(ch) && window[ch] == countT[ch]) have++;
            while(have == need){
                if(right - left + 1 < resLen){
                    resLen = right - left + 1;
                    res = {left, right};
                }
                char c = s[left];
                window[c]--;
                if(countT.count(c) && window[c]<countT[c]) have--;

                left++;
            }
        }
        return resLen == INT_MAX ? "" : s.substr(res.first, resLen);
    }
};