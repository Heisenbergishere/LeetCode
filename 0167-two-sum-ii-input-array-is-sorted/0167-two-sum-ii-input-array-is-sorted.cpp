class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
     for( int i =0;i<n-1;i++){
        int a =target -nums[i]; 
        int r =n-1,l=i+1;
        while( l<=r){
            int mid = l+ (r-l)/2;
            if( nums[mid] == a){
                return {i+1,mid+1};
            }
            else  if( nums[mid] > a){
                r=mid-1;
            }
            else l=mid+1;
        }
     }   
    return {};     
    }
};