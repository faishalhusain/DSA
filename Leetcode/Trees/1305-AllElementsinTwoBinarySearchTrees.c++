class Solution {
public:
    void inorder(TreeNode* root, vector<int>& res) {
        if (!root) return;
        inorder(root->left, res);
        res.push_back(root->val);
        inorder(root->right, res);
    }

    vector<int> merge(vector<int>& a, vector<int>& b) {
        vector<int> res;
        int i = 0, j = 0;

        while (i < a.size() && j < b.size()) {
            if (a[i] < b[j]) {
                res.push_back(a[i++]);
            } else {
                res.push_back(b[j++]);
            }
        }

        while (i < a.size()) res.push_back(a[i++]);
        while (j < b.size()) res.push_back(b[j++]);

        return res;
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> a, b;

        inorder(root1, a);
        inorder(root2, b);

        return merge(a, b);
    }
};