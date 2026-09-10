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
void count(TreeNode* root,vector<int>& ans){
    if (root == NULL)return;

    ans.push_back(root->val);
    count (root->left ,ans);
    count (root->right ,ans);
}
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>ans;
        count (root1,ans);
        count (root2,ans );

     sort (ans.begin(),ans.end());
     return ans;
    }
};