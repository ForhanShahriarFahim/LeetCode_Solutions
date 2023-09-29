class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        bool flag = false;
        if(is_sorted(nums.begin(), nums.end())){
            flag = true;
        }
        else{
            for(int i=n-1;i>0;i--){
            if(nums[i-1]>=nums[i]){
                flag = true;
            }
            else{
                flag = false;
                break;
            }
        }
        }
        
        return flag;
    }
};