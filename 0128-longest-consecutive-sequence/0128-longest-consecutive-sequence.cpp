class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size(),ans=0;
        unordered_set<int>s(nums.begin(),nums.end()  );
        for( int x : s){
            if( s.count(x-1)){
                continue;
            }
            else {
                int t = x;
                while( s.count(t) ){
                    t++;
                }
                ans = max( ans , (t-x));
            }
        }
    return ans;
    }
};