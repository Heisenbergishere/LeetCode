/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int search(vector<int>&inorder,int left , int right,int val){
    int i;
    for(  i=left;i<=right;i++){
        if( val == inorder[i])break;
    }
    return i;
}
TreeNode* Helper(vector<int>& preorder, vector<int>& inorder,int& preidx,int left ,int right){
    if( left > right)return NULL;
    TreeNode* root = new TreeNode(preorder[preidx]);
    
    int idx = search( inorder,left,right,preorder[preidx]);
    preidx++;
    root->left  = Helper(preorder,inorder,preidx,left,idx-1);
    root->right = Helper(preorder,inorder,preidx,idx+1,right);
    return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preidx =0;
    return Helper(preorder,inorder,preidx,0,preorder.size()-1);
    }
};