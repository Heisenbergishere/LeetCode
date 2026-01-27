class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l = 0; 
        int r = nums.size()-1;
        int sum = INT_MIN;
        while(l<r){
            sum = max(nums[l]+nums[r],sum);
            l++;
            r--;

        }
        return sum;


        
    }
};