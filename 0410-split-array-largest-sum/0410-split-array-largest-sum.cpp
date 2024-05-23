class Solution {
    
public:
    int valueCount(vector<int>&nums, int mid){
        int partition = 1, pagesAdd = 0;
        for(int i = 0;i<nums.size();i++){
            if(pagesAdd + nums[i]<=mid){
                pagesAdd+=nums[i];
            }
            else {
                partition++;
                pagesAdd = nums[i];
            }
        }
        return partition;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int mid;
        while(low<=high){
            mid = (low + high)/2;
            if(valueCount(nums,mid) > k){
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return low;
    }
};