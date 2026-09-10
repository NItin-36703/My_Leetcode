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
int count = 0;
int sum(TreeNode* root,int& ans,int& nodes){
    if (root == NULL) return 0;

    ans+= root->val;
   nodes++;

    sum(root->left,ans,nodes);
    sum(root->right,ans,nodes);

    return floor(ans/nodes);
}
    int averageOfSubtree(TreeNode* root) {
         if (root == NULL) return 0;
         int ans=0;
         int nodes= 0;
         if (root->val  == sum(root,ans,nodes)){
            count++;
         }
        averageOfSubtree(root->left);
        averageOfSubtree(root->right);

   return count; }
};