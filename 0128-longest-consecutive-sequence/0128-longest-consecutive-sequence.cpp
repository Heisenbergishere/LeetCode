class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int i=0,ans=1,mx=0,n=nums.size();
        if( n==0)return 0;
        while(i<n-1){
            if( nums[i] ==nums[i+1]-1){
                ans++;
            }
            else if(nums[i]==nums[i+1]){
                i++;
                continue;
            }
            else {
                mx = max( mx,ans);
                ans=1;
            }
            i++;
        }
        mx = max( mx,ans);
        return mx;
    }
};