class Solution {
public:
int fun( int i, vector<int>&v, vector<int>&dp){
    int n = v.size();
    if( i>=n)return 0;
    if( dp[i] != -1)return dp[i];
    int a =v[i]+ fun(i+2,v,dp);
    int b = fun(i+1,v,dp);
    return dp[i] = max( a,b);
}

    int rob(vector<int>& v) {
        int n = v.size();
        vector<int>dp(n+1,-1);
        return fun(0,v,dp);
    }
};