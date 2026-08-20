class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int i=0,j=0;
        map<char,int>m;
        int ans=0;
        int mf =0;
        while( j<n){
            m[s[j]]++;
            mf = max(mf, m[s[j]]);
            while( (j-i+1) -mf >k  ){
                m[s[i]]--;
                i++;
            }
            ans = max( ans, j+1-i);
            j++;
        }
        return ans;

    }
};