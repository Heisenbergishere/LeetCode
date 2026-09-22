class Solution {
public:

int fun(int i,int j, vector<vector<int>>& grid ,vector<vector<int>>&dp){
    int m = grid.size(),n =grid[0].size();
    if( i >=m || j>=n){
        return INT_MAX;
    }
    if( i==m-1 && j ==n-1)return grid[i][j];

    if( dp[i][j] != -1){
        return dp[i][j];
    }
    int a = fun(i+1,j,grid,dp);
    int b = fun(i,j+1,grid,dp);
    return dp[i][j] =grid[i][j]+ min(a,b);
}
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(),n =grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return fun(0,0,grid,dp);
    }
};