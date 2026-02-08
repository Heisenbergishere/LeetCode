class Solution {
public:
TreeNode* prev = NULL;
TreeNode* first = NULL;
TreeNode* second = NULL;

void function(TreeNode* node){
    if( node == NULL)return;
    function(node->left);
    if(prev != NULL && node->val < prev->val){
        if( !first)first=prev;
        second = node;
    }
    prev=node;
    function(node->right);
}
    void recoverTree(TreeNode* root) {
        function(root);
        swap(first->val ,second->val);
    }
};