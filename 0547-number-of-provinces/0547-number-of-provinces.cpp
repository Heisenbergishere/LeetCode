class Solution {
public:
void dfs( vector<bool>&vis ,vector<vector<int>>&adj,int i,int n){
    queue<int>q;
    q.push(i);
    vis[i]=true;
    while(q.size()){
        int k = q.front();
        q.pop();
        auto vec = adj[k];
       for( int j=0;j<vec.size();j++){
           if( !vis[vec[j]]){
            q.push(vec[j]);
            vis[vec[j]]=true;
           }
        }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>>adj(n+1);
        vector<bool>vis(n+1,false);
        vis[0]=true;
        for( int i =0;i<n;i++){
            for( int j =0;j<n;j++){
                if( isConnected[i][j]){
                    adj[i+1].push_back(j+1);
                    adj[j+1].push_back(i+1);
                }   
            }
        }
        int ans=0;
        for( int i=0;i<n;i++){
            if( !vis[i+1]){
                dfs(vis,adj,i+1,n);
                ans++;
            }
        }
    return ans;
    }
};