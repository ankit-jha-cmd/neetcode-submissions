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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        queue<TreeNode*>q;
        if(!root) return ans;
        q.push(root);
        while(!q.empty()){
            int len=q.size();
            for(int i=0;i<len;i++){
                TreeNode* el=q.front();
                if(i==len-1) ans.push_back(el->val);
                q.pop();
                if(el->left) q.push(el->left);
                if(el->right) q.push(el->right);
            }
        }
        return ans;
    }
};
