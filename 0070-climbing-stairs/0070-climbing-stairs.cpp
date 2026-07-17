class Solution {
public:
int func( int a,int n,vector<int>&dp){
    
    if( a>n){
        return 0;
    }
    if( a==n){
        return 1;
    }
    if( dp[n-a] !=-1){
        return dp[n-a];
    }
    int a1 =func(a+1,n,dp);
    int a2 =func(a+2,n,dp);
    return dp[n-a] = a1+a2;
}
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return func(0,n,dp);
    }
};