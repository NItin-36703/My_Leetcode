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
bool find_sum(TreeNode* root, int targetSum ,int sum){
       if (root == NULL)return false;

       sum+=root->val;

       if (root -> left == NULL && root -> right == NULL){
        if (targetSum == sum){
            return true;
        }
        return false;
       }
      return  find_sum(root->left , targetSum ,sum) || find_sum(root->right ,targetSum ,sum);
       

}

    bool hasPathSum(TreeNode* root, int targetSum) {
      return find_sum(root,targetSum,0); 

    }
};