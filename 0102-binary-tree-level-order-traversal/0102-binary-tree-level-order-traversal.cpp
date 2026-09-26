class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if( root ==NULL)return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>> ans;
        while(!q.empty()){
            int t = q.size();
            vector<int>c;
            for(int i =0;i<t;i++){
                TreeNode* temp = q.front();
                q.pop();
                c.push_back(temp->val);
                if( temp->left)q.push(temp->left);
                if( temp->right)q.push(temp->right);
            }
        ans.push_back(c);
        }
        return ans;
    }
};