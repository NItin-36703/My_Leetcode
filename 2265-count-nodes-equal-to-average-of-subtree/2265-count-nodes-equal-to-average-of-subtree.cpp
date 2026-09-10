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

pair<int,int> sum(TreeNode* root,int& count){
    if (root == NULL) return {0,0};

   auto [leftsum, Lnodes]=  sum(root->left ,count);
    auto [rightsum,Rnodes] =sum(root->right,count );
      
      int sum_at_node = leftsum + rightsum +root->val;

      int total_nodes = Lnodes + Rnodes+1;

      if (sum_at_node/total_nodes == root->val)count++;

      return {sum_at_node, total_nodes};
    
}
    int averageOfSubtree(TreeNode* root) {
        int count = 0;
 sum (root,count);
   return count; }
};