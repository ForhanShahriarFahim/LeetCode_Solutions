class Solution {
    
private:
   int binarySearch(vector<int>&arr, int low, int high,int target){
        int ans = 0;
        int index = high;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(arr[mid] == target){
                ans = mid;
                return ans;
            }
            else if(arr[mid]>target){
                
                high = mid-1;
                ans = high;
                
            }
            else {
                ans = low;
                low = mid+1;
                
            }
        }
        
        return ans+1;
    }
public:
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums,0,nums.size()-1, target);
    }
};