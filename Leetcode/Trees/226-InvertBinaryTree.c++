//this solution is based on recursion

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) return nullptr; 
        swap(root -> left,root -> right);
        invertTree(root -> left); // recursive call
        invertTree(root -> right); //recursive call
        return root;
    }
};