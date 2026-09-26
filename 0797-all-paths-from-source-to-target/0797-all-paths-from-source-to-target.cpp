class Solution {
public:
void solve(vector<vector<int>>& ans, vector<vector<int>>&graph, vector<int> temp,int i){

    temp.push_back(i);

 if (i == graph.size()-1){
  
    ans.push_back(temp);
    return;
 }
   

        for(auto it: graph[i]){
            solve(ans,graph,temp,it);
        }
    
}
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
      vector<vector<int>> ans;
       vector<int>temp;
      solve (ans,graph,temp,0);

      return ans;  

    }
};