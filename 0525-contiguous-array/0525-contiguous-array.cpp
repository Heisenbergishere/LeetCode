class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int i=0,j=0;
        int ans=0,sum=0;
        map<int,int>m;
        m[0]=0;
        while( j<n){
            if( nums[j]==1)sum++;
            else sum--;
            if( !m.count(sum)){
                m[sum] =j;
            }
            if( sum ==0){
                ans = max( ans , j-m[sum]+1);
            }
            else  ans = max( ans , j-m[sum]);
            j++;
        }
        return ans;
    }
};