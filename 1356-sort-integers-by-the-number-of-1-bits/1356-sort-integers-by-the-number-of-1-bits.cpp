class Solution {
public:
long long  setbits(int n){
    long long ans=0;
    while(n){
        if( n%2 ==1)ans++;
        n/=2;
    }
    return ans;
}
    vector<int> sortByBits(vector<int>& arr) {
        vector<int>ans;
        int n =arr.size();
        long long j =0;
        while(j<=14){
            vector<long long >v;
            for( int i =0;i<n;i++){
                if( setbits(arr[i])==j ){
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