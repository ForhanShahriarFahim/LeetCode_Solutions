class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        vector<vector<int>> visited(r, vector<int>(c));
        queue<pair<pair<int, int>, int>> q;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (grid[i][j] == 2) {
                    visited[i][j] = 2;
                    q.push({{i, j}, 0});
                } else {
                    visited[i][j] = 0;
                }
            }
        }
        int time = 0;
        vector<pair<int, int>> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        while (!q.empty()) {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            q.pop();
            time = max(time, t);
            for (auto x : dir) {
                int newRow = row + x.first;
                int newCol = col + x.second;
                if (newRow >= 0 && newRow < r && newCol >= 0 && newCol < c &&
                    grid[newRow][newCol] == 1 && !visited[newRow][newCol]) {
                    q.push({{newRow, newCol}, t + 1});
                    visited[newRow][newCol] = 2;
                }
            }
        }
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (grid[i][j] == 1 && visited[i][j] != 2) {
                    return -1;
                }
            }
        }
        return time;
    }
};