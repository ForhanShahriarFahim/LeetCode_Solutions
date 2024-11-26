class Solution {
public:
    void backtracking(int idx, int n, int target, vector<int>&candidates, vector<int>&v, vector<vector<int>>&ans){
        if(target == 0){
            ans.push_back(v);
            return;
        }
        if(target<0)return;
        for(int i = idx;i<n;i++){
            if(i>idx && candidates[i] == candidates[i-1]) continue;
            if(candidates[i]>target) break;
            v.push_back(candidates[i]);
            backtracking(i+1, n, target - candidates[i], candidates, v, ans);
            v.pop_back();  
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>v;
        vector<vector<int>>ans;
        int n = candidates.size();
        sort(candidates.begin(), candidates.end());
        backtracking(0, n, target, candidates, v, ans);
        return ans;
    }
};