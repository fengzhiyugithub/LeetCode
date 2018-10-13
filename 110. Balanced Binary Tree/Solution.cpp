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
    bool isBalanced(TreeNode* root) {
        return levelDiff(root)!=-1;
    }
    int levelDiff(TreeNode* root) {
        if(!root)
            return 0;
        int left=levelDiff(root->left),right=0;
        if(left!=-1) {
            right=levelDiff(root->right);
        }
        if(left==-1||right==-1||abs(right-left)>1)
            return -1;
        return max(left, right)+1;
    }
};