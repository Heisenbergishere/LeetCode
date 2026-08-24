class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& dig) {
        set<int>s(dig.begin(),dig.end());
        map<int,int>m;
        map<int,int>m1;
        for( int i : dig)m[i]++;
        vector<int>v;
        for( int i=100;i<1000;i+=2){
            int t = i;
            m1=m;
            bool ok =false;
            while(t){
                int a = t%10;
                if( !s.contains(a) || m1[a] ==0 ){
                    ok = true;
                    break;
                }
                m1[a]--;
                t/=10;
            }
            if( ok )continue;
            v.push_back(i);
            m1.clear();
        }
        return v;
    }
};