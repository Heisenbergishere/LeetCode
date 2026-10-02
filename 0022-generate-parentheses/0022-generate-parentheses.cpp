class Solution {
public:
    stack<char>st;
bool iswell(string s ){
    if( s.size()==0)return true;
    for( char c : s){
        if( c=='(')st.push(c);
        else {
            if( !st.empty() && st.top() == '('){
                st.pop();
            }
            else return false;
        }
    }
    bool ok = (st.size()==0 ) ? true : false;
    while(!st.empty())st.pop();
    return ok;
}
void fun( string s , int n ,vector<string >&ans){
    if( s.size() >2*n)return;
    if( s.size()==2*n && iswell(s)){
        ans.push_back(s);
        return;
    }
    s= s+"(";
    fun(s,n,ans );
    s.pop_back();
    s= s+")";
    fun(s,n,ans ); 
    s.pop_back();
}

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        fun("",n,ans);
        return ans;
    }
};