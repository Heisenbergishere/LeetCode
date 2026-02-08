class BSTIterator {
public:
stack<TreeNode*>s;
void function(TreeNode* root){
    if(  root== NULL)return;
    s.push(root);
    function(root->left);
}
    BSTIterator(TreeNode* root) {
        function(root);
    }
    
    int next() {
       TreeNode* node = s.top();
       s.pop();
       function(node->right);
       return node->val;
    }
    
    bool hasNext(){
        return s.size()>0;        
    }
};

