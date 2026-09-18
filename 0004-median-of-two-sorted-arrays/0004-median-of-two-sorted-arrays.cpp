class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(),n=nums2.size();
        for( int i=0;i<n;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int k = n+m;
        if( k%2==1)return (double)nums1[k/2];
        return (double)(nums1[k/2 -1]+nums1[k/2])/2;

    }
};