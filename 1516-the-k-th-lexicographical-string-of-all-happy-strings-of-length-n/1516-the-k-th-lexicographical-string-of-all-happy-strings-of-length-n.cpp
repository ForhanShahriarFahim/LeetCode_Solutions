class Solution {
public:
    string getHappyString(int n, int k) {
        queue<string>q;
        vector<string>ans;
        q.push("a");
        q.push("b");
        q.push("c");
        while(!q.empty()) {
            string cur = q.front();
            q.pop();
            if(cur.size() == n) {
                ans.push_back(cur);
                continue;
            }
            string first = cur;
            string second = cur;

            if(cur.back() == 'a') {
                first.push_back('b');
                second.push_back('c');
            }
            else if(cur.back() == 'b') {
                first.push_back('a');
                second.push_back('c');
            }
            else {
                first.push_back('a');
                second.push_back('b');
            }
            q.push(first);
            q.push(second);
        }
        if(ans.size() < k) return "";
        else return ans[k - 1];
    }
};