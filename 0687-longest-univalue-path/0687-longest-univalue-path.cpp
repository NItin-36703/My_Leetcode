class Solution {
public:
    int solve(TreeNode* root, int& ans) {
        if (root == NULL) return 0;

        int left = solve(root->left, ans);
        int right = solve(root->right, ans);

        int l = 0, r = 0;

        if (root->left && root->left->val == root->val)
            l = left + 1;

        if (root->right && root->right->val == root->val)
            r = right + 1;

        ans = max(ans, l + r);

        return max(l, r);
    }

    int longestUnivaluePath(TreeNode* root) {
        int ans = 0;
        solve(root, ans);
        return ans;
    }
};