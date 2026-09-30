class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(),n = nums2.size();
        if( m > n){
            return findMedianSortedArrays(nums2,nums1);
        }
        int i =0,j = m;
        while( i<=j){
            int mid = i+ (j-i)/2;
            int len2  = (m+n+1)/2 -mid;
            int x1= (mid == 0) ? INT_MIN : nums1[mid-1];
            int x2= (len2 == 0) ? INT_MIN : nums2[len2-1];
            int x3 = (mid==m) ? INT_MAX : nums1[mid];
            int x4 =(len2==n) ? INT_MAX :  nums2[len2];
            if( x1 <= x4 && x2 <= x3){
                return (  (m+n)%2 !=0 ) ? max(x1,x2) :( max(x1,x2)+min(x3,x4))/2.0 ;
            }
            else if( x1  > x4){
                j = mid-1;
            }
            else i = mid+1;
        }
        return 0.000;
    }
};