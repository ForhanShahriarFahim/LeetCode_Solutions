class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int ans = 0;
        for(auto x : derived){
            ans ^=x;
        }
        return ans == 0;
    }
};