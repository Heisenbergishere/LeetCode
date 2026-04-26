class Solution {
public:
bool detectcycle(int x,int y,vector<vector<bool>> &vis ,vector<vector<char>>& grid,int m,int n){
    vis[x][y]=true;
    queue<pair<pair<int,int>,pair<int,int>>>q;
    q.push({{x,y},{-1,-1}});
    char c = grid[x][y];
    while(!q.empty()){
        int na = q.front().first.first;
        int nb = q.front().first.second;
        int pa = q.front().second.first;
        int pb = q.front().second.second;
        q.pop();
        int dx[4]={-1,1,0,0};
        int dy[4]={0,0,-1,1};
        for( int k =0;k<4;k++){
            int dr = dx[k]+na;
            int dc = dy[k]+nb;
            if( dr<m && dr >=0 && dc>=0 && dc<n && grid[dr][dc] ==c  && vis[dr][dc]==false && (!(dr==pa && dc==pb))){
                q.push({{dr,dc},{na,nb}});
                vis[dr][dc]=true;
            }
            else if(  dr<m && dr >=0 && dc>=0 && dc<n && grid[dr][dc] ==c  && vis[dr][dc]== true && (!(dr==pa && dc==pb)))return true;
        }
    }
    return false;
}
    bool containsCycle(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>>vis(m,vector<bool>(n,false));
        for(  int i=0;i<m;i++){
            for( int  j=0;j<n;j++){
                if( !vis[i][j] ){
                    if( detectcycle(i,j,vis,grid,m,n)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};