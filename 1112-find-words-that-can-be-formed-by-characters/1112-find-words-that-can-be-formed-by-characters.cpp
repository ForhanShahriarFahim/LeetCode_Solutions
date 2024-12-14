class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int>ump;
        for(auto c : chars){
            ump[c]++;
        }
        int ans = 0;
        for(auto word : words){
            unordered_map<char, int>wordcount;
            for(char c : word){
                wordcount[c]++;
            }
            bool good = true;
            for(auto& [c, freq] : wordcount){
                if(ump[c]<freq){
                    good = false;
                    break;
                }
            }
            if(good){
                ans+= word.size();
            }
        }
        return ans;
    }
};