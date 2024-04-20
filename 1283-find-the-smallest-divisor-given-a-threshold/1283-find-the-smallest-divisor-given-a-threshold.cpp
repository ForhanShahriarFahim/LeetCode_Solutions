class Solution {
private:
    int smallValue(vector<int>arr, int mid){
        int cnt = 0;
        for(int i = 0;i<arr.size();i++){
            cnt+=ceil((arr[i]*1.0)/mid);
        }
        //cout<<"cnt: "<<cnt<<endl;
        return cnt;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = INT_MIN, ans = 0;
        for(int i = 0;i<nums.size();i++){            
            high = max(high, nums[i]);
        }
        while(low<=high){
            int mid = low+(high-low)/2;
            if(smallValue(nums,mid)<=threshold){
                ans = mid;
                //cout<<ans<<endl;
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        return ans;
    }
};