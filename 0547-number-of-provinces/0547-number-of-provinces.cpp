class Solution {
private :
    void dfs( vector<vector<int>>adjls , vector<int>&vis,int k){
        vis[k]=1;
        for( auto it : adjls[k] ){
            if( !vis[it]){
                dfs(adjls,vis,it);
            }
        }
}
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        //to change adjacency matrix to list
        vector<vector<int>>adjls(n);
        for( int i =0;i<n;i++){
            for( int j =0;j<n;j++){
                if( isConnected[i][j] ==1 && i !=j){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
         vector<int> vis(n,0);
        int count =0;
        for( int i =0;i<n;i++){
            if( !vis[i]){
                count++;
                dfs(adjls,vis , i);
            }
        }
        return count;
    }
};