class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int>prefix(n+1, 0);
        int common = 0;
        vector<int>ans;
        for(int i = 0;i<A.size();i++){
            prefix[A[i]]++;
            if(prefix[A[i]] == 2){
                common++;
            }
            prefix[B[i]]++;            
            if(prefix[B[i]] == 2){
                common++;
            }

            ans.push_back(common);
        }
        return ans;
    }
};