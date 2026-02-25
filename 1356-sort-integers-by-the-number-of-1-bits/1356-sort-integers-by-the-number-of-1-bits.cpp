class Solution {
public:

    vector<int> sortByBits(vector<int>& arr) {
        vector<int>ans;
        int n =arr.size();
        long long j =0;
        while(j<=14){
            vector<long long >v;
            for( int i =0;i<n;i++){
                if( __builtin_popcount(arr[i])==j ){
                    v.push_back(arr[i]);
                }
            }
            sort(v.begin(),v.end());
            for( int val : v){
                ans.push_back(val);
            }
            j++;
        }
     return ans;   
    }
};