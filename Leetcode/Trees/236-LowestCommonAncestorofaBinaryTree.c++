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
    TreeNode* ans = NULL;
    int fun(TreeNode* node, TreeNode* a, TreeNode* b){
        if(node == NULL) return 0;
        int left = fun(node->left, a, b);
        int right = fun(node->right, a, b);
        int self = 0;
        if(node == a || node == b) self = 1;
        int total = left + right + self;
        if(total == 2 && ans == NULL) {
            ans = node;
        }
        return total;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        fun(root, p, q);
        return ans;
    }
};