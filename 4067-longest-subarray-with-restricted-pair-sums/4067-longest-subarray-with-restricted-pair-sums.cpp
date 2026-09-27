class Solution {
public:
    int maxSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        int i =0,j=0;
        vector<int>v(1005);
        while( j<n){
              int c = nums[j];
           while(i<j){
            bool ok = false;
            for( int k = j-1;k>=i;k--){
                int a1 = c-nums[k];
                int a2 = c+nums[k];
                int a3 = nums[k]-c;
                if( a1>0 && ( (a1 != nums[k] && v[a1]>0) || (a1 == nums[k] && v[a1]>1) )){
                    ok = true;
                    break;
                }
                else if( a2 <=1000 && v[a2] >0 ){
                    ok = true;
                    break;
                }
                else if( a2>0 && v[a2] >0 ){
                    ok = true;
                    break;
                }
            }
            if( ok){
                v[nums[i]]--;
                i++;
            }
            else break;
           }
            v[c]++;
            ans = max( ans , j+1-i);
            j++;
        }
        ans = max( ans, j-i);
        return ans;
    }
};