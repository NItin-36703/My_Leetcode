class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        if (connections.size() < n-1){
            return -1;
        }
        vector<vector<long long >>adj_list(n);
        for (auto edges:connections){
            int x = edges[0];
            int y= edges[1];

            adj_list[x].push_back(y);
            adj_list[y].push_back(x);
        }

vector<long long >visited(n,0);
int count= 0;
        for (int i= 0;i<n;i++){
if (visited[i] == 0){
    queue<long long >q;
    q.push(i);
    visited[i] =1;
    count++;

    while (!q.empty()){
        int vertex= q.front();
        q.pop();
        for (auto edges:adj_list[vertex]){
            if (visited[edges] == 0){
                q.push(edges);
                visited[edges] =1;
            }
        }
    }
}
        }
  

    return count-1;}
};