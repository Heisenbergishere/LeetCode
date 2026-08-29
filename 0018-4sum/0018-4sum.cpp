class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int tar) {
        vector<vector<int>>ans;
     int n  = nums.size();
     sort(nums.begin(),nums.end());
        for( int i =0;i<n-3;i++){
            if(i>0 && nums[i] == nums[i-1])continue;
            for( int  j = i+1;j<n-2;j++){
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;
                long long t = (long long)tar - (long long)(nums[i]+nums[j]);
                int l = j+1,r=n-1;
                while( l<r){
                    int t1 =nums[l] + nums[r];
                    if( t1== t){
                        ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                        while(l<r &&  nums[l] ==nums[l+1])l++;
                        while(l<r &&  nums[r] ==nums[r-1])r--;
                        r--;
                        l++;
                    }
                    else if (t1 < t){
                        l++;
                    }
                    else r--;
                }
            }
        }
        return ans;
    }
};