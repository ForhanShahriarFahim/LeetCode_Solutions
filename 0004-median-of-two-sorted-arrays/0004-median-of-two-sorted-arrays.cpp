class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans = 0;
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        int n = nums1.size();
        if(n == 1) return (double)nums1[0];
        if(n%2 != 0){
            return (double)nums1[n/2];
        }
        else{
            ans = (double)(nums1[n/2-1] + nums1[n/2])/2.0; 
        }
        return ans;
    }
};