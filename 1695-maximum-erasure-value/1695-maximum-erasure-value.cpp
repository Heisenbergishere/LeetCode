class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n =nums.size();
        int j =0;
        map<int,int>m;
        int ans=0;
        int fans=0;
        for( int i =0;i<n;i++){
            m[nums[i]]++;
            ans +=nums[i];
            while(m[nums[i]] >1){
                ans -=nums[j];
               m[nums[j]]--;
               j++;
            }
           fans = max( fans  , ans);
        }
        return fans;
    }
};