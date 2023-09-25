class Solution {
public:
    char findTheDifference(string s, string t) {
        char result = 0;
        for(auto x:s+t){
            result^=x;
        }
        return result;

    }
};