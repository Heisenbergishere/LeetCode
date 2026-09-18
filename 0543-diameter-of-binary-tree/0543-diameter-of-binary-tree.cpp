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
int ans=0;
int height(TreeNode* node){
    if( !node)return 0;
    int a = height(node->left);
    int b = height(node->right);
   ans = max( ans, a+b);
    return max( a,b)+1;
}

    int diameterOfBinaryTree(TreeNode* root) {
         height(root);
        return ans;
    }
};