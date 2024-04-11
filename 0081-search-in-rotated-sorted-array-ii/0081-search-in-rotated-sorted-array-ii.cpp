class Solution {
private:
    bool rotatedBinarySearch(vector<int>&nums,int high,int target){
        int low = 0;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                return true;
            }
            if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                low++;
                high--;
                continue;
            }
            if(nums[low]<=nums[mid]){
                if(nums[low]<=target && target<=nums[mid]){
                    high = mid-1;
                }
                else low = mid+1;
            }
            else {
                if(nums[mid]<=target && target<=nums[high]){
                    low = mid+1;
                }
                else high = mid-1;
            }
        }
        return false;
        
    }
public:
    bool search(vector<int>& nums, int target) {
        return rotatedBinarySearch(nums,nums.size()-1,target);
    }
};