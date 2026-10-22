class Solution {
public:

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
      queue<int> terminal;
      vector<int> outdegree(graph.size());
      vector<int> ans;// storing the final nodes 
      
      for (int i=0 ;i<graph.size();i++){
        outdegree[i]= graph[i].size();
        if (graph[i].size() == 0){
            terminal.push(i);
            ans.push_back(i);
        }
      }

      vector<vector<int>>reversed_graph(graph.size());
      for (int i=0;i<graph.size();i++){
        for (int j=0;j<graph[i].size();j++){
            reversed_graph[graph[i][j]].push_back(i);
        }
      }
  while(!terminal.empty()){
    int node =terminal.front();
    terminal.pop();
     for (auto neighbour : reversed_graph[node]){
    outdegree[neighbour]--;
    if (outdegree[neighbour] == 0){
        ans.push_back(neighbour);
        terminal.push(neighbour);
    }
     }
  }
 sort(ans.begin(),ans.end());
  return ans;  }
};