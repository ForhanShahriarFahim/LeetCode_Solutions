class Solution {
public:
    void recursion(int idx, int n, vector<int>&arr, int target, vector<int>&temp, vector<vector<int>>&ans){
        if(idx==n){
            if(target == 0){
                ans.push_back(temp);
            }
        }
        if(idx>=n || target<0) return;
        temp.push_back(arr[idx]);
        recursion(idx, n, arr, target-arr[idx], temp, ans);
        temp.pop_back();
        recursion(idx + 1, n, arr, target, temp, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        int n = candidates.size();
        vector<int>temp;
        recursion(0, n, candidates, target, temp, ans);
        return ans;
    }
};