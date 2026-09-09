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
void find_path(TreeNode* root ,int count ,vector<int> & ans  ){
    if (root == NULL){
        ans.push_back(count);
        return;
    }

    count++;
    find_path(root->left,count,ans );
    find_path(root->right,count ,ans);
    
}
    int maxDepth(TreeNode* root) {
         vector<int> ans ;
         find_path(root,0,ans);
         int answer=INT_MIN;
         for (auto it : ans){
            answer= max(answer,it);
         }
    return answer;}
};