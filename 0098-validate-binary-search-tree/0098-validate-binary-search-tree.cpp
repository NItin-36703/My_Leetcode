class Solution {
public:
    bool inorder(TreeNode* root, long long& max) {
        if (root == NULL) return true;

        if (!inorder(root->left, max)) return false;

        if (root->val <= max) return false;

        max = root->val;

        return inorder(root->right, max);
    }

    bool isValidBST(TreeNode* root) {
        long long max = LLONG_MIN;
        return inorder(root, max);
    }
};