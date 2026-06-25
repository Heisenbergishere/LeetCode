class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>m;
        for( int i=0;i<text.size();i++){
            m[text[i]]++;
        }
        string s="ban";
        int ans=INT_MAX;
        bool func=0;
        for( auto i : s ){
            if( m.count(i)){
                ans = min (ans , m[i]);
                func=1;
            }
            else {
                return 0;
            }
        }
        if( func){
            int a=m['l'];
            int b=m['o'];
            ans = min(ans,a/2);
            ans = min(ans,b/2);
        }
        else{
            return 0;
        }

        return ans;
    }
};