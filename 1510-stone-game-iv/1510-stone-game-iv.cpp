class Solution {
public:
int func(int n , vector<int>&dp){
    if( n==0){
        return 0;
    }
    if( dp[n] != -1){
        return dp[n];
    }
    for( int j =1;j*j<=n;j++){
        if( func(n- j*j,dp) ==0)return dp[n] =1;
    }
    return dp[n]=0;
}

    bool winnerSquareGame(int n) {
        vector<int>dp(n+1,-1);
       return func( n,dp);
    }
};