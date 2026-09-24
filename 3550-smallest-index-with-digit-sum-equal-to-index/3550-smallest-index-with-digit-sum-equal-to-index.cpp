class Solution {
public:


    int smallestIndex(vector<int>& nums) {
        for( int i=0;i<nums.size();i++){
            int  p = nums[i],ans=0;
            while(p){
                ans+=p%10;
                p/=10;
            }
            if(ans==i)return i; 
        }
        return -1;
    }
};