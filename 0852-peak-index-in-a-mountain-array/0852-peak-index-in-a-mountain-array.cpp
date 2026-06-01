class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size(),idx=0,val=INT_MIN;
        for( int i =0;i<n;i++){
            if( arr[i] > val){
                idx = i;
                val =arr[i];
            }
        }
        return idx;
    }
};