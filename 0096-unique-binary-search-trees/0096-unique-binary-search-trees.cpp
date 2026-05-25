class Solution {
public:
int help(int p){
    int ans =0;
    if( p == 0 || p==1)return 1;
    for( int i =0;i<p;i++){
        ans +=help(i)*help(p-i-1);
    }
    return ans;
}
    int numTrees(int n) {
        return help(n);
    }
};