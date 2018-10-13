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
    void inOrder(TreeNode* root, vector<int>& res) {
        if(root->left)
            inOrder(root->left,res);
        res.push_back(root->val);
        if(root->right)
            inOrder(root->right,res);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>res;
        if(!root)
            return res;
        inOrder(root, res);
        return res;
    }
};