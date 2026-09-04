class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>p1(n,0);
        vector<int>p2(n,0);
        p1[0]=nums[0];
        p2[n-1]= nums[n-1];
        for( int i=1;i<n;i++){
            p1[i]=max( nums[i],p1[i-1]);
        }
        for( int i=n-2;i>=0;i--){
            p2[i]=min( nums[i],p2[i+1]);
        }
        for( int i=0;i<n;i++){
            if( p1[i] -p2[i] <= k)return i;
        }
        return -1;
    }
};