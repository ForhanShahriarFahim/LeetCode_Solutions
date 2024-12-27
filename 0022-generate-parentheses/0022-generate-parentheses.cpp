class Solution {
public:
    void backtracking(int openN, int closeN, int n, string &stack, vector<string>&res){
        if(openN == n && closeN == n) res.push_back(stack);
        if(openN<n){
            stack+="(";
            backtracking(openN + 1, closeN, n, stack, res);
            stack.pop_back();
        }
        if(closeN<openN){
            stack+=")";
            backtracking(openN, closeN + 1, n, stack, res);
            stack.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string stack;
        vector<string>res;
        backtracking(0, 0, n, stack, res);
        return res;
    }
};