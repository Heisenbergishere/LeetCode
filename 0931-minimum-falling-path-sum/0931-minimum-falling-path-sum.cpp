class Solution {
public:
int fun( int i,int j,vector<vector<int>>&dp,vector<vector<int>>&matrix){
     int n=matrix.size();
    if(i == n-1)return matrix[i][j];
    if( dp[i][j] != INT_MAX)return dp[i][j];
    int p =INT_MAX;
    for( int k =-1;k<=1;k++){
        int y = j+k;
        if(y >= 0 && y < n)
        p = min( p , fun(i+1,y,dp,matrix));
    }
   return dp[i][j] = matrix[i][j]+p;
}
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>>dp(n,vector<int>(n,INT_MAX));   
        int ans= INT_MAX;   
        for( int i=0;i<n;i++){
            ans = min( ans  , fun(0,i,dp,matrix));
        }
        return ans;
    }
};