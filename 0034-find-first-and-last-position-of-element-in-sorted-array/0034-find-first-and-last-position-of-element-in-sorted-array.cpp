class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = lower_bound(nums.begin(), nums.end(), target)-nums.begin();
        int second = upper_bound(nums.begin(), nums.end(), target)-nums.begin();
        if(first == nums.size()||nums[first] != target){            
            first = -1;            
        }
        
        if(second == 0){
            second = -1;
        }
        else{
            second--;
            if(nums[second]!=target){
                second = -1;
            }
        }
        return {first, second};
    }
};