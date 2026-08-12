class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
       int n  =nums.size();
       int j=0;
       map<int,int>m;
       int ans=0;
      for( int i =0;i<n;i++){
        m[nums[i]]++;
        while(m[nums[i]] > k){
            m[nums[j]]--;
            j++;
        }
        ans = max( ans , i+1-j);
      }
       return ans;
    }
};