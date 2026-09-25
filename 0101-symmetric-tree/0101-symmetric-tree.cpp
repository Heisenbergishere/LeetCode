class Solution {
public:
bool check(TreeNode* t1,TreeNode* t2 ){
    if( t1== NULL && t2 == NULL)return true;
    else if( t1== NULL && t2 != NULL)return false;
    else if( t2== NULL && t1 != NULL)return false;

    if( t1->val != t2->val)return false;
    if( t1->left && !t2->right)return  false;
    else if( !t1->left && t2->right)return  false;
    
    if( t2->left && !t1->right)return  false;
    else if( !t2->left && t1->right)return  false;
    
    return (check(t1->left,t2->right) && check(t1->right,t2->left));
}

    bool isSymmetric(TreeNode* root) {
       return check(root->left,root->right);
    }
};