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
    int function(TreeNode* node){
        if(node == NULL) return 0;
        int left = function(node->left);
        int right = function(node->right);
        return left+right+1;
    }
public:
    int countNodes(TreeNode* root) {
        return function(root);
        
    }
};