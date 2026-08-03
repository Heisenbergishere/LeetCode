class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans =1;
        int n = s.size();
        if( n==0)return 0;
        int i=0,j =0;
        unordered_set<int>st;
        while( j<n){
             while( st.contains(s[j]) ){
                st.erase(s[i]);
                i++;
             }
             st.insert(s[j]);
            ans = max( ans , j-i+1);
            j++;
        }
        ans = max( ans , j-i);
        return ans;
    }
};