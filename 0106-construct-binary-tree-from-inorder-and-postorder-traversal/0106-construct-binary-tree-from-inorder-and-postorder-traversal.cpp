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
TreeNode* create(int idx,int i,int j,vector<int>postorder,vector<int>&inorder){
	int t;
	if( i>j)return nullptr;
	TreeNode* root = new TreeNode(postorder[idx]);
	for( int k = i;k<=j;k++){
		if( inorder[k] == postorder[idx]){
			t=k;
			break;
		}
	}
	int r=j-t;
	root->left =create(idx-r-1,i,t-1,postorder,inorder);
	root->right = create(idx-1,t+1,j,postorder,inorder);
	return root;
}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
      return   create(n-1,0,n-1,postorder,inorder);
    }
};