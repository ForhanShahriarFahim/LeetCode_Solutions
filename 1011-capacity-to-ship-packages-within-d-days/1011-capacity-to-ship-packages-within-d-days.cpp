class Solution {
private:
    bool valid(vector<int>&arr, int mid,int days){  
        int cnt = 1, load = 0;
        for(int i = 0;i<arr.size();i++){               
            if(load + arr[i]>mid){
                cnt++;                
                load = arr[i];
            }
            else load+=arr[i];
            if(arr[i]>mid) return false;
        }        
        if(cnt<=days) return true;
        else return false;
    } 
public:
    int shipWithinDays(vector<int>& weights, int days) {
        long long sum = accumulate(weights.begin(), weights.end(),0);
        int ans = 0;
        int low = ceil((sum*1.0)/days);        
        int high = sum;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(valid(weights, mid, days)){
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