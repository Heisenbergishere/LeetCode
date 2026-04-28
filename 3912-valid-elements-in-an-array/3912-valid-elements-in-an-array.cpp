class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        if( nums.size() <=2)return nums;
        vector<int>ans;
        ans.push_back(nums[0]);
        for( int i=1;i<nums.size()-1;i++){
            int k1 = *max_element(nums.begin(),nums.begin()+i);
            int k2 = *max_element(nums.begin()+i+1,nums.end());
            if( nums[i] > k1 || nums[i] > k2)ans.push_back(nums[i]);
        }
        ans.push_back(nums[nums.size()-1]);
        return ans;
    }
};