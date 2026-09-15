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
int  solve(TreeNode* root,int& ans ){
 if ( root== NULL)return 0;

 int left_sum = solve(root->left,ans);
 int right_sum =solve (root->right,ans);

 int sum = left_sum  + right_sum + root->val;
 root ->val = abs(left_sum - right_sum);
 ans+=root->val;
 

 return sum;

}
    int findTilt(TreeNode* root) {
        int ans= 0;
        solve (root,ans);
        return ans;
    }
};