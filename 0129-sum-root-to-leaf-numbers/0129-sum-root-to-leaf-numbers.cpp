class Solution {
public:
int ans=0;
void fun( TreeNode* root , string s){
    if(!root){
        return ;
    }
    if(  !root->left && !root->right ) {
        s+=to_string(root->val);
        ans+= stoi(s);
        return ;
    }
    s+=to_string(root->val);
    fun(root->left,s);
    fun(root->right,s);
    return;
}
    int sumNumbers(TreeNode* root) {
        if(!root)return 0;
        fun(root,"");
        return ans;
    }
};