class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a="";
        string b="";
        for( int i=0;i<s.size();i++){
            if( s[i]=='#' && a.size()>=1){
                a.pop_back();
            }
            else if( s[i] !='#' ) {
                a.push_back(s[i]);
            }
        }
        for( int i=0;i<t.size();i++){
            if( t[i] =='#' && b.size()>=1){
                b.pop_back();
            }
            else if( t[i] !='#' ) {
                b.push_back(t[i]);
            }
        }
        return a==b;
    }
};