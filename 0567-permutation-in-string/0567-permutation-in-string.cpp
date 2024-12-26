class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len1 = s1.size(), len2 = s2.size();
        if(len1>len2) return false;
        vector<int>count1(26, 0), count2(26, 0);
        int left = 0, right = 0;
        while(right<s1.size()){
            count1[s1[right] - 'a']++;
            count2[s2[right] - 'a']++;
            right++;
        }
        right -= 1;
        while(right<s2.size()){
            if(count1 == count2) return true;
            right++;
            if(right < len2) count2[s2[right] - 'a']++;
            count2[s2[left++] - 'a']--;
        }
        return false;
    }
};