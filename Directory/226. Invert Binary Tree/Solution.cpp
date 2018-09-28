/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root){
        if(root->left) dfs(root->left);
        if(root->right) dfs(root->right);
        TreeNode* tmp=root->right;
        root->right=root->left;
        root->left=tmp;
    }
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return NULL;
        dfs(root);
        return root;
    }
};