class Solution {
public:

    int find_height(TreeNode* root, int& ans) {

        if (root == NULL)
            return 0;

        int left = find_height(root->left, ans);
        int right = find_height(root->right, ans);

        ans = max(ans, left + right);

        return 1 + max(left, right);
    }

    int diameterOfBinaryTree(TreeNode* root) {

        int ans = 0;

        find_height(root, ans);

        return ans;
    }
};