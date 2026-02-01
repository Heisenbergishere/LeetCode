class Solution {
public:
TreeNode* helper(vector<int>& nums,int st , int end){
    if(  st>end)return NULL;
    int mid = st + ( end-st )/2;
    TreeNode* node = new TreeNode(nums[mid]);
    node->left = helper(nums,st,mid-1);
    node->right = helper(nums,mid+1,end);
    return node;

}
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums,0,nums.size()-1);
    }
};