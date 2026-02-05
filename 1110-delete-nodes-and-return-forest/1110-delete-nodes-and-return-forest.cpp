class Solution {
public:
vector<TreeNode*>ans;
set<int>s;
void func(TreeNode* root){
        if( root ==  NULL )return ;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            auto curr  = q.front();
            q.pop();
            if( curr->left){
                if( s.count(curr->left->val)){
                    TreeNode* node = curr->left;
                    curr->left = NULL;
                    func(node);
                }
                else{
                    q.push(curr->left);
                }
            }
            if( curr->right){
                if( s.count(curr->right->val)){
                    TreeNode* node = curr->right;
                    curr->right = NULL;
                    func(node);
                }
                else{
                    q.push(curr->right);
                }
            }
        }
        if( s.count(root->val)){
            if(root->left){
                func(root->left);
            }
            if(root->right){
                func(root->right);
            }
        }
        else{
            ans.push_back(root);
        }
        return;
}
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        for( int v : to_delete)s.insert(v);
        func(root);
        return ans;
    }
};