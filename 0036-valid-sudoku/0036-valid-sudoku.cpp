class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>>row, column;
        map<pair<int, int>, unordered_set<char>>grid;
        for(int r = 0;r<9;r++){
            for(int c = 0;c<9;c++){
                if(board[r][c] == '.') continue;
                int val = board[r][c];
                if(row[r].count(val) || column[c].count(val)) return false;
                
                if(grid[{r/3, c/3}].count(val)) return false;
                row[r].insert(val);
                column[c].insert(val);
                grid[{r/3, c/3}].insert(val); 
            }
        }
        return true;
    }
};