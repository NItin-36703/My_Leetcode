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
void inorder(TreeNode* root,vector<int>& ans){
    if (root == NULL)return;

    
    inorder(root->left ,ans);
    ans.push_back(root->val);
   inorder (root->right ,ans);
}
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>ans1;
        vector<int> ans2;
        inorder (root1,ans1);
        inorder (root2,ans2);
  int s1=0;
  int s2=0;
  vector<int>answer;
        while (s1<ans1.size()  && s2< ans2.size()){
            if (ans1[s1] < ans2[s2]){
                answer.push_back(ans1[s1]);
                s1++;
            }
           else if (ans1[s1] > ans2[s2]){
                answer.push_back(ans2[s2]);
                s2++;
            }

            else {
                answer.push_back(ans1[s1]);
                answer.push_back(ans2[s2]);
                s1++;
                s2++;

            }

        }
        
            while(s2< ans2.size()){
                answer.push_back(ans2[s2]);
                s2++;
            }
        

         
            while(s1< ans1.size()){
                answer.push_back(ans1[s1]);
                s1++;
            
        }
   
    
     return answer;
    }
};