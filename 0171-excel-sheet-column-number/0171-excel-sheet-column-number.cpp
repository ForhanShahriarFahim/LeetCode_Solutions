class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for(char x : columnTitle){
            result = result * 26 + (x - 'A' + 1);
        }
        return result;
    }
};