class Solution {
private: 
    int rotatedBinarySearch(vector<int>&nums,int low, int high, int target){
        int ans = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                
                return mid;
            }
            if(nums[low]<=nums[mid]){
                if(nums[low]<=target && nums[mid]>=target){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            else {
                if(nums[mid]<=target &&target<=nums[high]){
                    low = mid+1;
                }
                else {
                    high = mid-1;
                }
            }
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
       return rotatedBinarySearch(nums,0,nums.size()-1, target);
    }
};