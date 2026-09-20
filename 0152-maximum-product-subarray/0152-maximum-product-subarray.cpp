class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pref = 1;
        int suff =1,n = nums.size();
        int ans  = INT_MIN;
        for( int i =0;i<n;i++){
            if( nums[i]==0)pref = 1;
            if( nums[i]==0)suff=1;
            suff  = suff*nums[n-i-1];
            pref  = pref*nums[i];

            ans = max( ans , max(pref,suff));
        }
        return ans;
    }
};