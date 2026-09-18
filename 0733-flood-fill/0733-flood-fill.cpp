class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size() ,n= image[0].size();
        if( image[sr][sc] ==color)return image;
        queue<pair<int,int>>q;
        q.push({sr,sc});
        int a[4] ={-1,1,0,0};
        int b[4]={0,0,-1,1};
        int clr = image[sr][sc];
        image[sr][sc]=color;
        while(!q.empty()){
            auto [r,c] =q.front();
            q.pop();
            image[r][c]=color;
            for( int i =0;i<4;i++){
                int dx = r+a[i],dy=c+b[i];
                if(dx>=0 &&dy>=0 && dx<m && dy<n && image[dx][dy]==clr){
                    q.push({dx,dy});
                    image[dx][dy]=color;
                }
            }
        }
        return image;
    }
};