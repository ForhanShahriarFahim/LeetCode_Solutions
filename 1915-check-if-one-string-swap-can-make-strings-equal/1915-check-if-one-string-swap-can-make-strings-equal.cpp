class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int cnt = 0;
        int index1 = -1, index2 = -1;
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i])
                cnt++;
            if ((s1[i]!=s2[i]) && index1 == -1)
                index1 = i;
            else if ((s1[i]!=s2[i]) && index2 == -1)
                index2 = i;
        }
        if (cnt == 0)
            return true;
        if (cnt == 2 && s1[index1] == s2[index2] && s1[index2] == s2[index1])
            return true;
        else
            return false;
    }
};