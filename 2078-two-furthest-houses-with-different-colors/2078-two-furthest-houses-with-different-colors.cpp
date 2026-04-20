class Solution {
public:
    int maxDistance(vector<int>& clr) {
        int ans =INT_MIN;
        for( int i =0;i<clr.size();i++){
            for( int j =0;j<clr.size();j++){
                if( clr[i] != clr[j]){
                    ans = max( ans, abs(j-i));
                }
            }
        }
        return ans;
    }
};