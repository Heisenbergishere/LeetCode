class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        vector<vector<bool>>dp(n,vector<bool>(n,false));
        for(int i=0;i<n;i++)dp[i][i]=true;
    int ans = 1,stidx=0;
        for( int len =2;len<=n;len++){
            for( int i=0;i+len<=n;i++){
                int j  = i+len-1;
                if( s[i]==s[j] && ( dp[i+1][j-1] || (j-i) <=2)){
                    dp[i][j]=true;
                    if( j+1-i > ans){
                        ans = j+1-i;
                        stidx=i;
                    }
                }
            }
        }
        return s.substr(stidx,ans);
    }
};