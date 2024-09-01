class Solution {
public:
    vector<int> resultsArray(vector<vector<int>>& queries, int k) {
         vector<int>results;
         priority_queue<int>pq;
         for(auto &q:queries){
            int dist = abs(q[0]) + abs(q[1]);
            if(k>pq.size()){
                pq.push(dist);
            }
            else{
                if(dist<pq.top()){
                    pq.pop();
                    pq.push(dist);
                }
            }
            if(pq.size()<k) results.push_back(-1);
            else results.push_back(pq.top());
         }

        return results;
    }
};