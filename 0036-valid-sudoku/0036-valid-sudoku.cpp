class Solution {
public:

bool check( vector<vector<char>>& v,int i,int j,char c){
    int l= (i/3)*3;
    int r = (j/3)*3;
    if( c=='.')return true;
    for( int a=l;a<l+3;a++){
        for( int b =r;b<r+3;b++){
            if( a==i && b==j)continue;
            if( v[a][b]==c)return false;
        }
    }
    return true;
}
    bool isValidSudoku(vector<vector<char>>& v) {
        set<int>s;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if( v[i][j] !='.' && s.find(v[i][j]) ==s.end() )s.insert(v[i][j]);
                else if( v[i][j] !='.' ) return false;
            }
            s.clear();
        }
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if(  v[j][i] !='.' &&  s.find(v[j][i]) ==s.end() )s.insert(v[j][i]);
                else if( v[j][i] !='.' ) return false;
            }
            s.clear();
        }
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if( !check(v,i,j,v[i][j]) )return false;

            }
        }
    return true;
         
    }
};