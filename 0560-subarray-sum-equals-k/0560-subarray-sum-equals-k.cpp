class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int maxLen = 0;
        unordered_map<long long, int>prefixSum;
        int len = 0;
        long long sum=0;
        int cnt=0,ans = 0;
        int n = nums.size();
        
        for(int i = 0;i<nums.size();i++){                       
            sum+=nums[i];
            if(sum == k){                
                cnt++;
            }
            long long rem = sum-k;
            if(prefixSum.find(rem)!=prefixSum.end()){                
                cnt+=prefixSum[rem];
            }
            prefixSum[sum]++;
            
            
        }        
        return cnt;
    }
};