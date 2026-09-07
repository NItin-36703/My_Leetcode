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
void find_path(TreeNode* root , vector<string>& ans ,string s){
    if (root == NULL) return ;
     
     s += to_string(root->val);

     if (root ->left == NULL && root->right == NULL) {
        ans.push_back(s);
     return;
     }
     s+="->";    
     find_path(root->left,ans,s);
     find_path(root->right,ans,s);
    
} 
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
      
       find_path(root,ans,"");
       return ans ;
    }
};