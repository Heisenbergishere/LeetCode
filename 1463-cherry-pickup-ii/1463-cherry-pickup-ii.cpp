class Solution {
public:
    int cherry(int row ,int col1, int col2, vector<vector<int>>& grid,
               vector<vector<vector<int>>>& dp) {
        int m = grid.size(), n = grid[0].size();
        if(row == m-1){
            if( col1==col2){
                return grid[row][col1];
            }
            return  grid[row][col1] + grid[row][col2];
        }
        if( dp[row][col1][col2] != -1 )return dp[row][col1][col2];
        int a = 0;
        for(int k = -1; k <=1; k++) {
            for( int l=-1;l<=1;l++){
                int dx = col1+ k;
                int dy = col2 +l;
                if(dx >= 0 && dy >= 0 && dx < n && dy < n) {
                    a = max(a, cherry(row+1,dx, dy, grid, dp));
                }
            }
        }
        int c = grid[row][col1];
        if( col1 != col2){
             c+=grid[row][col2];
        }
        return dp[row][col1][col2]=c+a; 
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<vector<int>>> dp(m,vector<vector<int>>(n,vector<int>(n, -1)));
        return cherry(0,0,n-1,grid,dp);
    }
};