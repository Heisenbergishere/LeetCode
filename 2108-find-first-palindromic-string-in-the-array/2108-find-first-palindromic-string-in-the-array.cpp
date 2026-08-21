class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans="";
        for( auto s : words){
            int i=0,j=s.size()-1;
            bool ok =false;
            while( i<j ){
                if( s[i] != s[j] )ok = true;
                i++;
                j--;
            }
            if( !ok)return s;
        }
        return "";
    }
};