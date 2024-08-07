class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>>maxHeap;
        map<char, int>freq;
        for(int i = 0;i<s.size();i++){
            freq[s[i]]++;
        }
        for(auto &x:freq){
            maxHeap.push({x.second,x.first});
        }
        s = "";
        while(!maxHeap.empty()){
            s+=string(maxHeap.top().first,maxHeap.top().second);
            maxHeap.pop();
        }
        return s;
    }
};