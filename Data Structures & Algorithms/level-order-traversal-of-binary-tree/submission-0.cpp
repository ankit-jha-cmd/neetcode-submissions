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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(!root) return ans;
        q.push(root);
        while(!q.empty()){
            int len=q.size();
            vector<int>arr;
            for(int i=0;i<len;i++){
                TreeNode* topel=q.front();
                int val= topel->val;
                q.pop();
                arr.push_back(val);
                if(topel->left) q.push(topel->left);
                if(topel->right) q.push(topel->right);
            }
            ans.push_back(arr);
        }
        return ans;
    }
};
