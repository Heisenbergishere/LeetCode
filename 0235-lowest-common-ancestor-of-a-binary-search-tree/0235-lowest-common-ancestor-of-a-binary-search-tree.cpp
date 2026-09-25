class Solution {
public:
TreeNode* fun(TreeNode* root, int p  ,int q){
    if( !root || root->val ==p || root->val==q)return root;
    TreeNode* a = fun(root->left,p,q);
    TreeNode* b = fun(root->right,p,q);
    if( a && b)return root;
    return ( a != NULL ) ? a : b;
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return fun(root,p->val,q->val);
    }
};