class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
       vector<vector<int>>graph(numCourses);
    vector<int>indegree(numCourses,0);
       for (auto edge : prerequisites){
        int x = edge[0];
        int y = edge[1];

        graph[y].push_back(x);
        indegree[edge[0]]++; 
       } 
       int count =0 ;
       queue<int>q;
       for (int i = 0;i< indegree.size();i++){
        if (indegree[i] == 0){
            q.push(i);
        }
       }

       while (!q.empty()){
        int node = q.front();
        q.pop();

        count++;

        for (auto edge : graph[node]){
            indegree[edge]--;
            if (indegree[edge] == 0){
                q.push(edge);
            }

        }
       }
return count == numCourses;
    }
};