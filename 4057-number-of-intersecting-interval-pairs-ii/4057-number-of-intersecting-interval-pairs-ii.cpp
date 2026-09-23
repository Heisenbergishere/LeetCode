class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& v) {
        int n = v.size();
        long long ans =0;
        vector<int >st,end;
        for( int i=0;i<n;i++){
           st.push_back(v[i][0]);
           end.push_back(v[i][1]);
        }
        int j =0;
        sort(st.begin(),st.end());
        sort(end.begin(),end.end());
        for( int i=0;i<n;i++){
            while( j<n && st[j] <= end[i]){
                j++;
            }
            ans += (n-j);
        }
       long long p = (1LL*( n)*(n-1))/2;
        return p-ans;
    }
};