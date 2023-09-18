class Solution {
public:
    static bool myComparison(const pair<int,int> &a,const pair<int,int> &b)
    {
        if(a.second!=b.second)
            return a.second<b.second;
        else
            return a.first<b.first;
        
    }

    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int row = mat.size();
        int col = mat[0].size();
        vector<pair<int,int>>v;
        for(int i = 0;i<row;i++){
            int cnt = 0;
            for(int j = 0;j<col;j++){
                if(mat[i][j] == 1){
                    cnt++;
                   // cout<<i<<endl;
                }
            }
                v.push_back({i,cnt});            
        }
        for(auto x:v){
            cout<<x.first<<" "<<x.second<<endl;
        }
        sort(v.begin(),v.end(),myComparison);
        vector<int>ans;
        // for(auto x:v){
        //     cout<<x.first<<endl;
        // }
        for(int i = 0;i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};