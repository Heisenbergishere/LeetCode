class Solution {
public:
    vector<int> getRow(int n) {
    vector<vector<int>>ans(n+1);
    for( int i =0;i<=n;i++){
        ans[i].resize(i + 1);
        for(int j =0;j<=i;j++){
            if( j==0 || j==i){
                ans[i][j] = 1;
                continue;
            }
            ans[i][j] = ans[i-1][j]+ans[i-1][j-1];
        }
        if( i==n){
            return ans[i];
        }
    }
    return {};
    }
};