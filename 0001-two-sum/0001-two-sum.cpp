class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        int n = nums.size();
        for( int i=0;i<n;i++){
            m[nums[i]]=i;
        }
        for( int i =0;i<n;i++){
            int t = target - nums[i];
            if( m.count(t) && i != m[t]){
                return {i,m[t]};
            }
        }
        return {};
            }
};