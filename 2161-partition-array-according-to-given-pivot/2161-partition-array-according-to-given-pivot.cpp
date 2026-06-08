class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int >vec;
        for ( int i =0; i<n;i++){
            if ( nums[i] < pivot){
                vec.push_back(nums[i]);
            }
        }
        for ( int i =0; i<n;i++){
            if ( nums[i] == pivot){
                vec.push_back(nums[i]);
            }
        }
        for ( int i =0; i<n;i++){
            if ( nums[i] > pivot){
                vec.push_back(nums[i]);
            }
        }
        for ( int k =0;k<nums.size();k++){
            nums[k] = vec[k];
        }
    return nums;
    }
};