class Solution {
public:
    
bool pathFind(vector<vector<char>>&board, vector<vector<int>>& visited, string& word, vector<pair<int,int>>&dirc, int row, int col, int index){
        if(index == word.size()){
            return true;
        }
        if(col<0 || row<0 || col>=board[0].size() || row>=board.size() || visited[row][col] || board[row][col]!=word[index]){
            return false;
        }
        visited[row][col] = 1;
        for(auto &x:dirc){
            int newRow = row + x.first;
            int newCol = col + x.second;
            if(pathFind(board, visited, word, dirc, newRow, newCol, index+1))
                return true;
        }
        visited[row][col] = 0;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        vector<pair<int,int>>dirc = {{1,0}, {-1,0}, {0,1},{0,-1}};
        vector<vector<int>>visited(n, vector<int>(m,0));
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(word[0] == board[i][j] && pathFind(board, visited, word, dirc, i, j, 0)){
                    return true;
                }
            }
        }
        return false;
        
    }
};