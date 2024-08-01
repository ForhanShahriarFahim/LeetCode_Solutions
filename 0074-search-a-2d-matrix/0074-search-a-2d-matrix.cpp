class Solution {
public:
    bool binary_search(vector<int>&nums, int target){
        int high = nums.size()-1;
        int low = 0;
        while(low<=high){
            int mid = (low + high)/2;
            if(nums[mid] == target) return true;
            if(nums[mid]<target){
                low = mid+1;
            }
            else high = mid-1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0;i<n;i++){
            if(matrix[i][0]<=target && target<=matrix[i][m-1]){
                return binary_search(matrix[i],target);
            }
            else continue;            
        }
        return false;
    }
   
};