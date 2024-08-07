class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        for(int i = 0;i<s.length();i++){
            bool rotationPossible = true;
            for(int j = 0;j<s.length();j++){
                if(goal[(i+j)%goal.length()] != s[j]){
                    rotationPossible = false;
                    break;
                }
            }
            if(rotationPossible) return true;
        }
        return false;
    }
};