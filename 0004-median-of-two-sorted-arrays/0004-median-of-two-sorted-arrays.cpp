class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        double ans;
        int tot = n+m;
        if((n+m)%2){
            ans = (nums1[tot/2]);
        }
        else {
            ans = ((nums1[tot/2-1]+nums1[tot/2]))/2.0;
        }
        return ans;
    }
};