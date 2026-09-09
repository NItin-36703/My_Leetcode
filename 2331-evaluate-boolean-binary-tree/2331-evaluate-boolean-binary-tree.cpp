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
void update(TreeNode* root ){
    if (root->left == NULL && root->right == NULL ) 
    return;

    update (root->left);
    update (root->right);

    
     if (root->val == 2){
        root->val = root->left->val | root->right->val;
     }
     if (root ->val == 3){
        root->val=  root->left->val & root->right->val;
     } 
    

}
    bool evaluateTree(TreeNode* root) {
        if (root->left ==  NULL && root->right == NULL){
            if (root ->val == 0)return false;

            return true;
        }
         update (root );

        if (root->val == 1)return true;

        return false;
    }
};