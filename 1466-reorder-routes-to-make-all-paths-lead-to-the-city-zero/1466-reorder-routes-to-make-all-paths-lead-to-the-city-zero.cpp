class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int,int>>> routes(n);
        for (auto it:connections){
            int x= it[0];
            int y= it[1];

            routes[x].push_back({y,1});
            routes[y].push_back({x,0});

        }
        int count =0;
        vector<int>visited(n,0);

        queue<int>q;
        q.push(0);
       visited[0] = 1;


       while (!q.empty()){
        int node = q.front();
     q.pop();

     for (auto edge :routes[node]){
        int neighbour=edge.first;
        int direction =edge.second;

        if (visited[neighbour] == 0){
            q.push(neighbour);
            visited[neighbour] =1;

            if(direction == 1){count++;}
        }
     }
       }

 return count;   }
};