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
void solve(TreeNode* root,priority_queue<string,vector<string>,greater<string>>& pq,string s){
    if (root == NULL)return;
    

     char ch='a'+ root->val;
     s+= ch;
     if (root->left == NULL && root->right== NULL){
  reverse(s.begin(),s.end());
  pq.push(s);

     }

    solve (root->left, pq,s);
    solve (root->right,pq,s );

     

}
    string smallestFromLeaf(TreeNode* root) {
        priority_queue<string,vector<string>,greater<string>>pq;
        solve (root ,pq,"");
        return pq.top();
    }
};