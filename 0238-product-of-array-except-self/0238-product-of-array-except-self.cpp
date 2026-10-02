class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>a(n,1),b(n,1),ans(n,1);
        long long x =1;
        for( int i=0;i<n;i++){
            a[i]=x;
            x = x*nums[i];
        }
        x=1;
        for( int i=n-1;i>=0;i--){
            b[i]=x;
            x = x*nums[i];
        }
        for( int i =0;i<n;i++){
            long long t = 1LL*a[i]*b[i];
            ans[i]=t;
        }
        return ans;
    }
};