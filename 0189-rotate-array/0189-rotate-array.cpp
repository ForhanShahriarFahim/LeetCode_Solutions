class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>ans;
        int n = nums.size();
        k%=n;
        
        if(k == 0)return;
        int cnt = 0;
        for(int i = n-1;;i--){
            ans.push_back(nums[i]);
            cnt++;
            if(cnt == k)break;
        }
        reverse(ans.begin(),ans.end());
        for(int i = 0;i<n-k;i++){
            ans.push_back(nums[i]);
        }
        nums = ans;
    }
};