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
int mx = INT_MIN;
int fun(TreeNode* root){
    if( root==NULL)return 0;
    int l =max(0,fun(root->left));
    int r =max(0,fun(root->right));
    mx  = max( mx , l+r+root->val);
    return ( root->val)+ max( l,r);
}

    int maxPathSum(TreeNode* root) {
       fun(root); 
       return mx; 
    }
};