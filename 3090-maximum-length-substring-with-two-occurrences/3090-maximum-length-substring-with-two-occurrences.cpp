class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n  = s.size();
        int l=0;
        int ans =0;
        map<char,int>m;
        for( int i =0;i<n;i++){
            m[s[i]]++;
            if( m[s[i]] >2){
                ans = max( ans ,i-l);
                while(m[s[i]] >2){
                    m[s[l]]--;
                    l++;
                }
            }
        }
        ans = max( ans, n-l);
        return ans;
    }
};