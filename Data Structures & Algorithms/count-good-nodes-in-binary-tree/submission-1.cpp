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
int fn(TreeNode* root, int& cnt, int k){
    if(!root) return cnt;
    if(root->val>=k){
        cnt+=1;
        k=root->val;
    }
    fn(root->left, cnt, k);
    fn(root->right, cnt, k);
    return cnt;
}
    int goodNodes(TreeNode* root) {
        int cnt=0;
        int k=root->val;
        return fn(root, cnt, k);
    }
};
