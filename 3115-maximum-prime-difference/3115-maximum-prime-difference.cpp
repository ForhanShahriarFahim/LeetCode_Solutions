class Solution {
private:
    bool isPrime(long long n)
    {
        // Corner case
        if (n <= 1)
            return false;

        // Check from 2 to n-1
        for (int i = 2; i <= n / 2; i++)
            if (n % i == 0)
                return false;

        return true;
    }
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int lowInd = INT_MAX, highInd = INT_MIN;
        for(int i = 0;i<nums.size();i++){
            if(isPrime(nums[i])){
                lowInd = min(lowInd, i);
                //cout<<"value "<<lowInd<<" "<<i<<endl;
                highInd = max(highInd, i);
            }
        }
        int ans;
        if(highInd == INT_MAX)ans = 0;
        else ans = highInd-lowInd;
        return ans;
    }
};