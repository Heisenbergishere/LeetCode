class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int>m;
        for( char c : s){
            m[c]++;
        }
        for( char c : t){
            m[c]++;
        }
        for(auto it:m){
            if( it.second%2){
                return it.first;
            }
        }
        return 'c';
    }
};