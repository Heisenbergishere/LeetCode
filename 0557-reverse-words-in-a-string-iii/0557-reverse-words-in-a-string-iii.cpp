class Solution {
public:
    string reverseWords(string s) {
        int i=0,j=0;
        int n = s.size();
        while( i<n){
            while( j+1 <n && s[j+1] != ' ')j++;
            int a = i,b=j;
            while( a<b){
                swap(s[a],s[b]);
                a++;
                b--;
            }
            i=j+2;
            j=j+2;
        }
        while( s[s.size()-1] ==' ')s.pop_back();
        return s;
    }
};