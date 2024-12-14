class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        if(arr.size() == 1 || arr[0]>arr[1]) return 0;
        int len = arr.size();
        if(arr[len-1]>arr[len-2]) return len-1;
        int low = 1, high = len - 2;
        int ans = -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid + 1]){
                return mid;
            }
            else if(arr[mid - 1]<=arr[mid]){
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return -1;
    }
    
};