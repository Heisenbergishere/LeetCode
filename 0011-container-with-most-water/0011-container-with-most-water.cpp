class Solution {
public:
    int maxArea(vector<int>& nums) {
        int ans = 0;
        int i =0,n=nums.size(),j=n-1;
        while(i<j){
            ans = max( ans , (j-i)*min(nums[i],nums[j]) );
           nums[i] <nums[j] ? i++ : j--;
        }
        ans = max( ans , (j-i)*min(nums[i],nums[j]));
        return ans;
    }
};