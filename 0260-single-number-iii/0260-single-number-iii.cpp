class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long  xo = 0;
        for( int i : nums)xo^=i;
        int mask = xo&(-xo);
        int x1=0,x2=0;
        for( int v : nums){
            if( v&mask)x1^=v;
            else x2^=v;
        }
        return {x1,x2};
    }
};