class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n =nums.size();
        int sum =0,ans=0;
        unordered_map<int,int>m;
        for( int i=0;i<n;i++){
            m[sum]++;
            if( m.count(sum-goal +nums[i])){
                ans+=m[sum-goal+nums[i]];
            }
            sum+=nums[i];
        }
        return ans;
    }
};