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

 int height( TreeNode* root){
    if( !root)return true;
    int a = height(root->left);
    int b =  height(root->right);
    if( a==-1 || b==-1)return -1;
    if( abs(a-b) >1)return -1;
    return 1+max( a,b);
}

    bool isBalanced(TreeNode* root) {
        return height(root) != -1 ? true : false;
    }
};