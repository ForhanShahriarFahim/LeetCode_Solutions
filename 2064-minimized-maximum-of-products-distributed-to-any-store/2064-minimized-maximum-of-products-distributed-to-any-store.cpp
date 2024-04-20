class Solution {
private:
    int maximizingMin(vector<int>&arr, int mid){
        int cnt = 0;
        for(int i = 0;i<arr.size();i++){
            cnt+=ceil((arr[i]*1.0)/mid);
        }
        return cnt;
    }
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int low = 1, high = *max_element(quantities.begin(), quantities.end());
        int ans = 0;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(maximizingMin(quantities,mid)<=n){
                ans = mid;
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        return ans;
    }
};