class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int>res(nums.size(),0);
        int n = nums.size();
        for( int i =0;i<nums.size();i++){
            res[i] = nums[ ( ( i+ nums[i] )%n+n)%n];
        }
    return res;
    }
};