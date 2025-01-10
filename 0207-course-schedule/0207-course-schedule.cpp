class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adjList(numCourses);
        vector<int>inDegree(numCourses);
        for(auto prerequisite : prerequisites){
            inDegree[prerequisite[0]]++;
            adjList[prerequisite[1]].push_back(prerequisite[0]);
        }
        queue<int>q;
        for(int i = 0;i<numCourses; i++){
            if(inDegree[i] == 0){
                q.push(i);
            }
        }
        vector<int>ans;
        while(!q.empty()){
            int front = q.front();
            q.pop();
            ans.push_back(front);
            numCourses--;
            for(auto x : adjList[front]){
                inDegree[x]--;
                if(inDegree[x] == 0) q.push(x);

            }
        }
        return numCourses == 0;
    }
};