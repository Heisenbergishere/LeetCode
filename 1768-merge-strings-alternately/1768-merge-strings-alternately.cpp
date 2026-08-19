class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,n1=word1.size(),n2=word2.size();
        string s="";
        int k =min(n1,n2);
        while( i<k){
            s+=word1[i];
            s+=word2[i];
            i++;
        }
        string s1 ="";
        for( int j = i;j<n1;j++)s+=word1[j];
        for( int j = i;j<n2;j++)s+=word2[j];
        return s;
        
    }
};