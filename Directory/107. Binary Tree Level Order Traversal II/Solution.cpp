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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>res;
        queue<TreeNode*>que;
        stack<vector<int>>st;
        if(!root) {
            return res;
        }
        que.push(root);
        while(!que.empty()) {
            int num = que.size();
            vector<int>vec;
            for(int i=0; i<num; i++) {
                TreeNode* now=que.front();
                if(now->left) que.push(now->left);
                if(now->right) que.push(now->right);
                vec.push_back(now->val);
                que.pop();
            }
            st.push(vec);
        }
        while(st.size()) {
            res.push_back(st.top());
            st.pop();
        }
        return res;
    }
};

