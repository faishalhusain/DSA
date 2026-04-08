class Solution {
public:
    void helper(TreeNode* root, vector<int>& result) {
        if (root == nullptr) return;

        result.push_back(root->val);   // Root
        helper(root->left, result);    // Left
        helper(root->right, result);   // Right
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        helper(root, result);
        return result;
    }
};