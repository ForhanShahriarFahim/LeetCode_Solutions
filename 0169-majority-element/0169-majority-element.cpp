class Solution {
public:
    
    int majorityElement(vector<int>& nums) {
        // Moor's Voting algo 
        int element, cnt = 0, cnt1=0;
        for(int i = 0;i<nums.size();i++){
            if(cnt == 0){
                element = nums[i];
                cnt = 1;
            }
            else if(nums[i] == element){
                cnt++;
            }
            else {
                cnt--;
            }

        }
        for(int i = 0;i<nums.size();i++){
            if(element == nums[i]){
                cnt1++;
            }
        }
        cout<<element<<" "<<cnt1<<endl;
        if(cnt1>nums.size()/2){
            return element;
        }
        else return -1;
    }
};