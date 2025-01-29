class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int n  = isWater.size();
        int m = isWater[0].size();
        vector<vector<int>>vis(n, vector<int>(m, 0));
        vector<vector<int>>dis(n, vector<int>(m, 0));
        queue<pair<pair<int, int>, int>>q;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(isWater[i][j]){
                    q.push({{i, j}, 0});
                    vis[i][j] = 1;
                }
            }
        }
        vector<pair<int, int>>dir = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int steps = q.front().second;
            q.pop();
            dis[row][col] = steps;
            for(auto x:dir){
                int newRow = x.first + row;
                int newCol = x.second + col;
                if(newRow >= 0 && newRow < n && newCol >= 0 && newCol < m && !vis[newRow][newCol]){
                    vis[newRow][newCol] = 1;
                    q.push({{newRow, newCol}, steps + 1});
                }
            }
        }
        return dis;
    }
};