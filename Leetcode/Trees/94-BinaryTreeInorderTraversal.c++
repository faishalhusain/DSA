class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if (root == NULL) return res;

        // Get left subtree
        vector<int> left = inorderTraversal(root->left);

        // Add left subtree values
        res.insert(res.end(), left.begin(), left.end());

        // Add root
        res.push_back(root->val);

        // Get right subtree
        vector<int> right = inorderTraversal(root->right);

        // Add right subtree values
        res.insert(res.end(), right.begin(), right.end());

        return res;
    }
};