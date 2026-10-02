class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0,ele=0;
        for( int  x : nums){
            if( cnt==0){
                cnt=1;
                ele=x;
            }
            else if( x==ele){
                cnt++;
            }
            else cnt--;
        }
        return ele;
    }
};