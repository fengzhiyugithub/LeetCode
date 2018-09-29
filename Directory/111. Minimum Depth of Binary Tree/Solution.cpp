
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
    int maxDepth(TreeNode* root) {
        if(!root)
            return 0;
        return max(maxDepth(root->left),maxDepth(root->right))+1;
    }
    void fun(TreeNode* root,int level,int& res) {
        if(!root)
            return ;
        if(!root->left&&!root->right) {
            if(level<res) {
                res=level;
            }
        }
        fun(root->left, level+1, res);
        fun(root->right, level+1, res);
    }
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        int res=maxDepth(root);
        fun(root,1,res);
        return res;
    }
};