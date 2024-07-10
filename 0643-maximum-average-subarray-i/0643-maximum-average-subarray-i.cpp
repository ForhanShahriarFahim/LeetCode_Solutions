class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = INT_MIN, avg = INT_MIN;
        long long int sum = 0;
        int start = 0, end = 0;
        while(end<nums.size()){
            sum+=nums[end];
            if(end-start + 1 == k){
                avg = (double)sum/k;
                ans = max(ans, avg);
                // cout<<start<<" "<<end<<" "<<avg<<endl;
                sum -= nums[start];
                start++;
            }
            end++;
        }
        return ans;
    }
};