class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     int cnt1=0,cnt2=0,e1=INT_MIN,e2=INT_MIN;
     int n = nums.size();
      for( int x : nums){
         if( x==e1){
            cnt1++;
         }
         else if( x==e2){
            cnt2++;
         }
         else if( cnt1==0){
                e1=x;
                cnt1++;
         }
         else if( cnt2==0){
            e2=x;
            cnt2++;
         }
         else {
            cnt1--;
            cnt2--;
         }
      }
      cnt1=0,cnt2=0;

      for( int x : nums){
         if( x==e1)cnt1++;
         else if( x==e2)cnt2++;
      }
      vector<int>res;
      if( cnt1 > n/3  ){
        res.push_back(e1);
      }
      if( cnt2 > n/3  ){
        res.push_back(e2);
      }
      return res;
    }
};