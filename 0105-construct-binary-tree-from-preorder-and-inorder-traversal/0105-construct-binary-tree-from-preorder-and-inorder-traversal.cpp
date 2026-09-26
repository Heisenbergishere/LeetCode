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
TreeNode* create(int idx,int i,int j,vector<int>pre,vector<int>&in){
	int t;
	if( i>j)return nullptr;
	TreeNode* root = new TreeNode(pre[idx]);
	for( int k = i;k<=j;k++){
		if( in[k]==pre[idx]){
			t=k;
			break;
		}
	}
	int l=t-i;
	root->left =create(idx+1,i,t-1,pre,in);
	root->right = create(idx+l+1,t+1,j,pre,in);
	return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return create(0,0,preorder.size()-1,preorder,inorder);
    }
};