class Solution {
public:
    bool dfs(int node, int col, vector<int>& vis, vector<vector<int>>& graph) {
        vis[node] = col;
        for (auto neighbour : graph[node]) {
            if (vis[neighbour] == -1) {
                if (dfs(neighbour, !col, vis, graph) == false)
                    return false;
            } else if (vis[neighbour] == col)
                return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int v = graph.size();
        vector<int> vis(v, -1);
        for (int i = 0; i < v; i++) {
            if (vis[i] == -1) {
                if (dfs(i, 0, vis, graph) == false) {
                    return false;
                }
            }
        }
        return true;
    }
};