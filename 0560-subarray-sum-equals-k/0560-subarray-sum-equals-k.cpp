class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {      
        unordered_map<long long, int>prefixSum;
        long long sum=0,cnt=0;
               
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