class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q;
        if( !root)return {};
        q.push(root);
        vector<int>ans;
        while(!q.empty()){
            int t = q.size();
            vector<int>t1;
            for(int i =0;i<t;i++){
                TreeNode* temp = q.front();
                q.pop();
                t1.push_back(temp->val);
                if( temp->left)q.push(temp->left);
                if( temp->right)q.push(temp->right);
            }
            ans.push_back(t1[t1.size()-1]);
        }
        return ans;
    }
};