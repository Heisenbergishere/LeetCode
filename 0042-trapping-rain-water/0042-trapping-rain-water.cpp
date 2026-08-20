class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        vector<int>ps(n);
        vector<int>pf(n);
        ps[0]=h[0];
        pf[n-1]=h[n-1];
        for( int i =0;i<n-1;i++){
            ps[i+1]  = max( ps[i],h[i]);
        }
        for( int i =n-1;i>0;i--){
            pf[i-1]  = max( pf[i],h[i]);
        }
        int ans =0;
        for( int i=1;i<n-1;i++){
           int w= min(pf[i],ps[i])- h[i]; 
            if( w>0){
            ans +=  w;
            }
        }
        return ans;
    }
};