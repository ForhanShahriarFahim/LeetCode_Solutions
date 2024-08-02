class Solution {
public:
    int findMaxVal(vector<vector<int>>& mat, int row, int col){
        int maxVal = -1, maxInd = -1;
        for(int i = 0;i<row;i++){
            if(mat[i][col]>maxVal){
                maxVal = mat[i][col];
                maxInd = i;
            }
        }
        return maxInd;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int row = 0, col = m-1;
        int low = 0, high = m-1;
        while(low<=high){
            int mid = (low+high)/2;
            int maxRowInd = findMaxVal(mat, n,mid);
            int left = mid-1>=0?mat[maxRowInd][mid-1]:-1;
            int right = mid+1<m?mat[maxRowInd][mid+1]:-1;
            if(mat[maxRowInd][mid]>left && mat[maxRowInd][mid]>right) return {maxRowInd, mid};
            else if(mat[maxRowInd][mid]<left) high = mid-1;
            else low = mid+1; 
        }
        return {-1,-1};
    }
};