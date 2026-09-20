class Solution {
public:
int fun(int i,int n,string s, vector<int>&dp){
    if( i==n){
        return 1;
    }
    if( s[i]== '0')return 0;
    if( dp[i] != -1)return dp[i];
    int w1 = fun(i+1,n,s,dp),w2=0;
    if( i+1<n && stoi(s.substr(i,2)) <=26){
        w2 = fun(i+2,n,s,dp);
    }
    return dp[i] = w1+w2;
}
    int numDecodings(string s) {
        int n = s.size();
        vector<int>dp(n+1,-1);
        return fun(0,n,s,dp);
    }
};