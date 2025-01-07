class Solution {
public:
    
    vector<vector<int>>result;
    vector<vector<int>>permutation(vector<int>&nums, vector<int>&visited, vector<int>&temp){
        if(nums.size() == temp.size()){
            result.push_back(temp);
            result;
        }
        for(int i = 0;i<nums.size();i++){
            if(!visited[i]){
                visited[i] = 1;
                temp.push_back(nums[i]);
                permutation(nums, visited, temp);
                visited[i] = 0;
                temp.pop_back();
            }
        }
        return result;

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>visited(nums.size(), 0);
        vector<int>temp;
        return permutation(nums, visited, temp);    
    }
};