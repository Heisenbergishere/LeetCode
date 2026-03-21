class Solution {
public:
bool checkfunc(vector<vector<int>>& adj,int st,vector<int> &color){
     int m =adj.size();
        queue<int>q;
        q.push(st);
        color[st]=0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for( auto it : adj[node]){
                if( color[it] == -1){
                    color[it]= !color[node];
                    q.push(it);
                }
                else if( color[it] == color[node] ){
                    return false;
                }
            }
        }
    return true;
}
    bool isBipartite(vector<vector<int>>& adj) {
        int m =adj.size();
       vector<int>color(m,-1);
       for( int i  =0  ; i<m;i++){
            if( color[i]==-1 && !checkfunc(adj,i,color))return false;
       }
       return true;
    }
};