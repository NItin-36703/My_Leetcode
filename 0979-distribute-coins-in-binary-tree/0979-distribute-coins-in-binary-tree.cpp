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
pair<int,int> solve(TreeNode* root,int& ans ){
    if (root == NULL)return {0,0};

    auto [left_extra , left_moves] =solve (root->left ,ans);
    auto [right_extra ,right_moves] = solve (root->right,ans );

    int total = root->val+left_extra +right_extra;
     int extra = total-1;
     int moves = abs(extra) + left_moves +right_moves;
   ans =  moves;
     return {extra , moves};

}
    int distributeCoins(TreeNode* root) {
       int ans = 0;
       solve (root,ans);
       return ans;   
    }
};