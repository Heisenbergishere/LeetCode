class Solution {
public:
bool searchinrow( vector<vector<int>>& matrix, int target , int row ){
     int n = matrix[0].size();
     int st=0 , end =n-1;
     while ( st <=end ){
         int mid =st + (end -st )/2 ;
         if ( target == matrix[row][mid] ){
            return true;

         }
         else if ( target > matrix[row][mid]){
            st= mid+1;
         }
         else {
            end =mid-1;
         }
     }
    return false;
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int st=0; 
        int end=m-1;
        while (st <= end){
            int mid =st + (end -st )/2 ;
            if ( matrix[mid][0] <= target && target  <=matrix[mid][n-1]){
               return searchinrow(matrix , target , mid);
            }
            else if ( target > matrix[mid][n-1]) {
                st= mid+1 ;
            }
            else {
                end =  mid-1;
            }
    }
    return false;
}
};