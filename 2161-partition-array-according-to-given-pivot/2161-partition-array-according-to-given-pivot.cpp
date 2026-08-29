class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int>v(n,0);
        int j=0;
        for( int i =0;i<n;i++){
            if( nums[i] < pivot){
                v[j]=nums[i];
                j++;
            }
        }
        for( int i =0;i<n;i++){
            if( nums[i] == pivot){
                v[j]=nums[i];
                j++;
            }
        }
        for( int i =0;i<n;i++){
            if( nums[i] > pivot){
                v[j]=nums[i];
                j++;
            }
        }
        return v;
    }
};