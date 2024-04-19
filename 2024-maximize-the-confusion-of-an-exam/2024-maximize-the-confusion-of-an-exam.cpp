class Solution {
private:
    int count(string s, char b, int k){
        int ans = 0, cnt = 0;
        int n = s.size();
        int l = 0, r = 0;
        while(r<n){
            if(s[r] == b) cnt++;
            while(l<n && cnt>k){
                if(s[l] == b)
                    cnt--;
                l++;
            }
            ans = max(r-l+1, ans);
            r++;          
        }
        return ans;
    }
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        //Using sliding window tecnique
        return max(count(answerKey, 'F', k), count(answerKey, 'T', k));
    }
};