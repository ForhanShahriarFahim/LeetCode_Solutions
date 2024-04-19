class Solution {
private:
    bool bokeyMade(vector<int>&arr, int day, int m, int k){
        int cnt = 0;
        int numberB = 0;
        for(int i = 0;i<arr.size();i++){
            if(day>=arr[i]){
                cnt++;
            }
            else {
                numberB+=(cnt/k);
                cnt = 0;
            }
        }
        numberB+=(cnt/k);
        if(numberB>=m)return true;
        else return false;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = INT_MAX, high = INT_MIN;
        int ans = -1;
        for(int i = 0;i<bloomDay.size();i++){
            low = min(low, bloomDay[i]);
            high = max(high, bloomDay[i]);
        }
        
        while(low<=high){
            int mid = low+(high-low)/2;
            if(bokeyMade(bloomDay, mid, m, k)){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }       
       
        return ans;
    }
};