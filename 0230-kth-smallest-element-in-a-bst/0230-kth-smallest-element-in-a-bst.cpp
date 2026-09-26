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
void fun(TreeNode* root){
    if(!root)return;
    ans.push_back(root->val);
    fun(root->left);
    fun(root->right);
}
        vector<int>ans;
    int kthSmallest(TreeNode* root, int k) {
      //  if( !root)return 
        fun(root);
        sort(ans.begin(),ans.end());
        return ans[k-1];
    }
};