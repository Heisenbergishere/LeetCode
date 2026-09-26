class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>m;
        for( auto i : knowledge){
            m[i[0]]=i[1];
        }
        string ans="";
        int i =0,n=s.size();
        while(i<n){
           if( s[i] != '('){
           ans+=s[i];
           i++;
           }
           else {
            int j=i;
            while( j<n && s[j] !=')'){
                j++;
            }
            if( m.count(s.substr(i+1,j-i-1))){
                ans += m[s.substr(i+1,j-i-1)];
            }
            else {
                ans+="?";
            }
            i=j+1;
           }
        }
        return ans;
    }
};