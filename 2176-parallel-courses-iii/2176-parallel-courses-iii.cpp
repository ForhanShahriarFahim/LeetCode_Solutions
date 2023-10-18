class Solution {
public:
    unordered_map<int, vector<int>>graph;
    vector<int>vis;

    int dfs(int node, vector<int>& time){
        if(vis[node]!=-1){
            return vis[node];
        }
        if(graph[node].size() == 0){
            return time[node];
        }

        int ans = 0;
        for(int neighbour:graph[node]){
            ans = max(ans, dfs(neighbour, time));
        }
        vis[node] = time[node] + ans;
        return time[node] + ans;
    }

    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        for(auto &edge:relations){
            int x = edge[0]-1;
            int y = edge[1]-1;
            graph[x].push_back(y);
        }
        vis = vector(n,-1);

        int ans = 0;
        for(int node = 0;node<n;node++){
            ans = max(ans, dfs(node, time));
        }
        return ans;
    }
};