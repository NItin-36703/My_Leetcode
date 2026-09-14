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
int find_sum(TreeNode* root,unordered_map<int,int>& mp){
    if (root == NULL )return 0;

        int left_sum = find_sum(root->left,mp);
        int right_sum = find_sum(root->right,mp);
           
           int sum = left_sum + right_sum + root->val;
           mp[sum]++;

           return sum;   
}
    vector<int> findFrequentTreeSum(TreeNode* root) {
        unordered_map<int,int>mp;
        find_sum(root,mp);
     
     int highest_frequency=INT_MIN;
     for (auto it:mp){
        if (it.second > highest_frequency ){
             highest_frequency = it.second;
        }
     }

vector<int> ans;
for (auto it: mp){
    if (it.second ==  highest_frequency){
        ans.push_back(it.first);
    }
}
  
  return ans;  }
};