class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int row = image.size(), col = image[0].size();
        vector<vector<int>>visited(row, vector<int>(col, 0));
        vector<pair<int, int>>dir = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
        queue<pair<int, int>>q;
        q.push({sr, sc});
        int initial_color = image[sr][sc];
        visited[sr][sc] = 1;
        image[sr][sc] = color;
        
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;            
            q.pop();           
            for(auto x : dir){
                int newRow = r + x.first;
                int newCol = c + x.second;
                if(((newRow>=0 && newRow<row) && (newCol>=0 && newCol<col)) && image[newRow][newCol] == initial_color && !visited[newRow][newCol]){
                    visited[newRow][newCol] = 1;                    
                    image[newRow][newCol] = color; 
                    q.push({newRow, newCol});
                }
            }
        }
        return image;
    }
};