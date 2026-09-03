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
void inorder(TreeNode* root,unordered_map<int,int>&mp){
if (root == NULL){
    return;
}
 inorder(root->left,mp);
 mp[root->val]++;
 inorder(root->right,mp);
}
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int>mp;
       inorder(root,mp);

       priority_queue<pair<int,int>> pq;

       for (auto it:mp){
        pq.push({it.second,it.first});

       }
       vector<int>ans;
       auto [max,index]= pq.top();
       pq.pop();
       ans.push_back(index);
       while (!pq.empty() && pq.top().first == max){
        ans.push_back(pq.top().second);
        pq.pop();
       }
return ans;
    }
};