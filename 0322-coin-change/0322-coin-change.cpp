class Solution {
public:
int fun( int  i ,int n , vector<int>&dp,vector<int>&v){
    if( i==0)return 0;
    if( i<0)return INT_MAX;
    if( dp[i] != -1)return dp[i];
    int a =INT_MAX;
    for( int j =0;j<n;j++){
        
        int res = fun(i-v[j],n,dp,v);
        
        if( res != INT_MAX){
            a = min( a,1+res);
        }
    }
   return  dp[i]= a;
}
    int coinChange(vector<int>& coins, int amount) {
        int n  = coins.size();
        vector<int>dp(amount+1,-1);
        int ans =fun(amount,n,dp,coins);;
        if( ans ==INT_MAX){
            return -1;
        }
        return ans;
    }
};