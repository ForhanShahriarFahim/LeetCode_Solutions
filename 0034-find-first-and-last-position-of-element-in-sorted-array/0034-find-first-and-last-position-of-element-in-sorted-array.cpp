class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int start = -1, end = -1;
        bool first = false;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == target && !first){
                start = i;
                first = true;
            }
            else if(nums[i] == target && first) {
                end = i;
            }
        }
        if(!first){
            return {-1,-1};
        }
        else if(start!=-1 && end!=-1){
            return {start, end};
        }
        else {
            end = start;
            return {start, end};
        }
    }
};