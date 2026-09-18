class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        int n = v.size(),a=1,b=1;
        vector<int> pre(n),suf(n);
        for( int i=0;i<n;i++){
            pre[i]=a;
            a*=v[i];
        }
        for( int i=n-1;i>=0;i--){
            suf[i]=b;
            b*=v[i];
        }
        for( int i= 0;i<n;i++){
            v[i]=pre[i]*suf[i];
        }
        return v;
    }
};