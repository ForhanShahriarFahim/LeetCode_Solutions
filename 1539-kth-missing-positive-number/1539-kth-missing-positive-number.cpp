class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>missing;
        int index = 0;
        for(int i = 1;i<=3000;i++){
            if(index<arr.size() && arr[index] == i){
                index++;                
            }
            else missing.push_back(i);
        }
        for(auto x:missing){
            cout<<x<<" ";
        }
        return missing[k-1];
    }
};