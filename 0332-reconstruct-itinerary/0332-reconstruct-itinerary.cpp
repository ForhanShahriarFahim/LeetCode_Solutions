class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        unordered_map<string, multiset<string>>adj;
        vector<string> ans;
        int n = tickets.size();

        for(int i = 0;i<n;i++){
            adj[tickets[i][0]].insert(tickets[i][1]);        
        }

        stack<string>stk;
        stk.push("JFK");
        while(!stk.empty()){
            string src = stk.top();
            if(adj[src].size() == 0){
                ans.push_back(src);
                stk.pop();
            }
            else {
                auto distance = adj[src].begin();
                stk.push(*distance);
                adj[src].erase(distance);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};