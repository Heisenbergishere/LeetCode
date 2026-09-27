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
int ans =0;
int fun( TreeNode* root,int val){
    if(!root)return 0;
    int k=root->val;
    int l = fun(root->left,k); 
    int r = fun(root->right,k); 
    ans = max( ans , l+r+1);
    if( root->val != val){
        return 0;
    }
    return 1+max( l,r);
}
    int longestUnivaluePath(TreeNode* root) {
        if( !root)return 0;
        fun(root,root->val);
        return ans-1;
    }
};