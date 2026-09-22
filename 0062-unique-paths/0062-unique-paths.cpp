class Solution {
public:
int ans=0;
int fun(int i,int j ,int m ,int n,vector<vector<int>>&dp){
    if( i>=m || j>=n)return 0;
    if( i==m-1 && j==n-1){
      return dp[i][j]=1;
    }
    if( dp[i][j] != -1){
        return dp[i][j];
    }
    int p1 = fun(i+1,j,m,n,dp);
    int p2 = fun(i,j+1,m,n,dp);
   return dp[i][j] =p1+p2;
}
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
    return fun(0,0,m,n,dp);
    }
};