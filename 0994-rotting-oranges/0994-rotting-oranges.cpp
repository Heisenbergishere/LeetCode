class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int fresh=0;
        queue<pair<int,pair<int,int>>>q;
        for( int i=0;i<m;i++){
            for( int j =0;j<n;j++){
                if(grid[i][j]==2 ){
                    q.push({0,{i,j}});
                }
            }
        }
        int mx=0;
        int a[4]={-1,1,0,0};
        int b[4]={0,0,-1,1};
        while(!q.empty()){
            int mn = q.front().first;
            auto [r,c]=q.front().second;
            mx = max( mx,mn);
            q.pop();
            for(int i=0;i<4;i++){
                int dx = r+a[i],dy=c+b[i];
                if( dx>=0 && dy>=0 && dx<m && dy<n &&  grid[dx][dy]==1){
                    grid[dx][dy]=2;
                    q.push({mn+1,{dx,dy}});
                }
            }
        }
         for( int i=0;i<m;i++){
            for( int j =0;j<n;j++){
                if(grid[i][j]==1 ){
                   return -1;
                }
            }
        }

        return mx;
    }
};