class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>ump;
        for(int i = 0;i<nums.size();i++){
            int diff = target - nums[i];
            if(ump.find(diff)!=ump.end()){
                return {ump[diff], i};
            }
            ump[nums[i]] = i;
        }
        return {};
    }
};