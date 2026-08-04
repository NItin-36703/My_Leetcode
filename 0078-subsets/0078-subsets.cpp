class Solution {
public:

void solve (vector<int>nums,vector<vector<int>>& ans,int index,vector<int> store){
    if (index >= nums.size()){
       ans.push_back(store);
       return;
    }
        solve(nums,ans,index+1,store);
        int element = nums[index];
        store.push_back(element);
        solve(nums,ans,index+1,store);

}
    vector<vector<int>> subsets(vector<int>& nums) {
     vector<vector<int>>ans;
    vector<int> ot;
    int index=0;
  solve (nums,ans,index,ot);
  return ans;   
    }
};