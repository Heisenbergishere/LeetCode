class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m;
        for( int i : nums)m[i]++;
        vector<int>ans;
         int n = nums.size();
        sort(nums.begin() ,nums.end() ,[&](const int &a , const int &b){
            if( m[a] != m[b])return  m[a] > m[b];
            return a < b;
        });
        int i =0;
        while( k-- && i<n){
            ans.push_back(nums[i]);
            int j =i;
            j++;
            while( j<n && nums[j]==nums[i] )j++;
            i=j;
        }
        return ans;
    }
};