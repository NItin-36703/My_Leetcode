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
tuple<bool ,int ,int ,int> is_bst(TreeNode* root,int& ans ){
   if (root == NULL)return {true,INT_MIN,INT_MAX,0};

   if (root->left == NULL && root->right == NULL){
    ans=max(ans,root->val);
   }

   auto [left_status,left_max,left_min,left_sum] = is_bst(root->left,ans );
   auto [right_status,right_max,right_min,right_sum] = is_bst(root->right,ans);

    if (left_status == true && right_status == true && root->val > left_max && root->val <right_min){
    int sum = left_sum +right_sum +root->val;
    ans =max(ans,sum);
    int maxi = max(right_max,root->val);
    int mini =min(root->val ,left_min);

    return {true, maxi ,mini,sum};
    }
   return {false,0,0,0};

}
    int maxSumBST(TreeNode* root) {
      int ans = 0;
  is_bst(root,ans);
  return ans;
    }
};