class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>s={4,16,37,58,89,145,42,20};
        int p = n;
        while( p != 1){
            int t = p,a=0;
            while(t>0){
                a += (t%10)*(t%10);
                t/=10;
            }
            if( s.count(a)){
                return false;
            }
            if( a==1)return true;
            p = a;
        }
        return true;
    }
};