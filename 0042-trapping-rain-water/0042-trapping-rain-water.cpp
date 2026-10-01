class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        vector<int>pref(n),suff(n);
        pref[0]=-1;
        int mx =-1;
        for( int i=0;i<n;i++){
            pref[i]=mx;
            mx = max( mx,height[i]);
        }
        mx=-1;
        for( int i=n-1;i>=0;i--){
            suff[i]=mx;
            mx = max( mx,height[i]);
        }
        int ans =0;
        for(int i =1;i<n-1;i++){
            if( pref[i] > height[i] && suff[i] > height[i]){
            int water = min(pref[i],suff[i])-height[i];
            ans += water;
            }
        }
    return ans;
    }
};