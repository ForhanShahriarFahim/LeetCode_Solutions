class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>odd, even;
        for(auto x:nums){
            if(x&1){
                odd.push_back(x);
            }
            else even.push_back(x);
        }
        even.insert(even.end(), odd.begin(),odd.end());
        return even;
    }
};