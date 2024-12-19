class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int sum = 0, chunk = 0, required = 0;
        for(int i = 0;i<arr.size();i++){
            sum+=arr[i];
            required +=i;
            if(sum == required) chunk++;
        }
        return chunk;
    }
};