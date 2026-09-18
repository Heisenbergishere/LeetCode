class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n = t.size();
        vector<int> ans(n,0);
        stack<int>s;
        for( int i =n-1;i>=0;i--){
            int a = t[i];
            while( s.size() && t[s.top()] <=a ){
                s.pop();
            }
           if( !s.empty())  ans[i] = s.top()-i;
            s.push(i);
        }   
        return ans;
    }
};