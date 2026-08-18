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
int fn(TreeNode* root, int& dmax){
    if(!root) return 0;
    int left= fn(root->left, dmax);
    int right= fn(root->right, dmax);
    dmax=max(dmax, left+right);
    return 1+max(left, right);
}
    int diameterOfBinaryTree(TreeNode* root) {
        int dmax=0;
        fn(root, dmax);
        return dmax;
    }
};
