class Solution {
private:
    int SingleElement(vector<int>&arr){   
        int n = arr.size();
        if(n==1)return arr[0];
        if(arr[0]!=arr[1])return arr[0];
        if(arr[n-1]!=arr[n-2])return arr[n-1];
        int low = 1, high = arr.size()-2;
        
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]){
                return arr[mid];
            }            
            if((mid%2 &&arr[mid] == arr[mid-1])||(mid%2==0 && arr[mid] == arr[mid+1])){            
                low = mid+1;            
            }
            else {
                high = mid-1;
            }            
        }
        return -1;        
    }
 
public:
    int singleNonDuplicate(vector<int>& nums) {
        return SingleElement(nums);
    }
};