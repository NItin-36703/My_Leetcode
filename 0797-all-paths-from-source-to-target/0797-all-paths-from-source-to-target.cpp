class Solution {
public:
void solve(vector<vector<int>>& ans, vector<vector<int>>&graph, vector<int> temp,int i){
 if (i == graph.size()-1){
    temp.push_back(i);
    ans.push_back(temp);
    return;
 }
    queue<int>q;
    q.push(i);
    while (!q.empty()){
        temp.push_back(q.front());
        q.pop();

        for(auto it: graph[i]){
            solve(ans,graph,temp,it);
        }
    }
}
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
      vector<vector<int>> ans;
       vector<int>temp;
      solve (ans,graph,temp,0);

      return ans;  

    }
};