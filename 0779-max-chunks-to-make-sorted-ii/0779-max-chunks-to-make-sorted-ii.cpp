class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        vector<int>temp = arr;
        long sum = 0, chunks = 0, value = 0;
        sort(temp.begin(), temp.end());
        for(int i = 0;i<arr.size();i++){
            sum+=arr[i];
            value+=temp[i];
            if(sum == value) chunks++;
        }
        return chunks;
    }
};