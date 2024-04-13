class Solution {
private:
    int rotatedBinarySearch(vector<int>&arr, int high){
        int low = 0;
        int small = INT_MAX;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[low]<=arr[mid]){
                small = min(small, arr[low]);
                low = mid+1;
            }
            else {
                small = min(small, arr[mid]);
                high = mid-1;
            }
        }
        return small;
    }
public:
    int findMin(vector<int>& nums) {
        return rotatedBinarySearch(nums, nums.size()-1);
    }
};