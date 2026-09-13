class Solution {
public:
    int fun1(int i,vector<int>& v,vector<int>& dp) {
        int n = v.size();
        if( i>=n-1)return 0;
        if (dp[i] != -1)
            return dp[i];
        int a = v[i] + fun1(i + 2,v, dp);
        int b = fun1(i + 1,v, dp);
        return dp[i] = max(a, b);
    }
    int fun2(int i,vector<int>& v,vector<int>& dp) {
        int n = v.size();
        if( i <1)return 0;
        if (dp[i] != -1)
            return dp[i];
        int a = v[i] + fun2(i - 2,v, dp);
        int b = fun2(i - 1,v, dp);
        return dp[i] = max(a, b);
    }
    int rob(vector<int>& v) {
        int n = v.size();
        if( n==1)return v[0];
        vector<int> dp(n + 1, -1);
        vector<int> dp1(n + 1, -1);
        return max( fun1(0,v,dp),fun2(n-1,v,dp1));
    }
};