class Solution {
private:
    int count(vector<int>arr, int value, int k){
        int left = 0, right = 0, ans = 0, cnt = 0;
        int n = arr.size();
        
        while(right<n){
            if(arr[right] == value){
                cnt++;
            }
            while(cnt>k){
                if(arr[left] == value) cnt--;
                left++;
            }
            ans = max(right-left+1, ans);
            right++;
        }
        return ans;
    }
public:
    int longestOnes(vector<int>& nums, int k) {
        return count(nums, 0,k);
    }
};