class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>st;
        int ans;
        for(int x:nums){
            if(st.find(x)!=st.end()){
                ans = x;
                break;
            }
            else {
                st.insert(x);
            }
        }
        return ans;
    }
}; 