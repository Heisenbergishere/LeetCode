class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result=0;
        for( int k=0;k<=31;k++){

            int c1=0,c0=0;
            int temp = 1<<k;
            for( int n : nums){
                if( (n&temp)==0)c0++;
                else c1++;
            }
            if( c1%3==1){
                result = ( result | temp);
            }
        }
    return result;
    }
};