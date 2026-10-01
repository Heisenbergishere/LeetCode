class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        stack<char>st;
        int l=0,r=0,mx=0;
        for( int i =0;i<n;i++){
            int c = s[i];
            if( c=='(')l++;
            else r++;

            if( l < r){
                l=0,r=0;
            }
            else if(l==r) {
                mx = max( mx , l*2);
            }
        }
        l=0,r=0;
        for( int i =n-1;i>=0;i--){
            int c = s[i];
            if( c==')')l++;
            else r++;

            if( l < r){
                l=0,r=0;
            }
            else if(l==r) {
                mx = max( mx , l*2);
            }
        }
        //if(!st.empty())return ans-2*(st.size());
        return mx;
    }
};