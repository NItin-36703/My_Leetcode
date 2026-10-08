class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        
        if(n == 1)
            return {0};

        vector<vector<int>> graph(n);
        vector<int> degree(n, 0);

        for(auto edge : edges) {
            int a = edge[0];
            int b = edge[1];

            graph[a].push_back(b);
            graph[b].push_back(a);

            degree[a]++;
            degree[b]++;
        }

        queue<int> q;

        for(int i = 0; i < n; i++) {
            if(degree[i] == 1)
                q.push(i);
        }

        while(n > 2) {
            
            int size = q.size();

            for(int i = 0; i < size; i++) {
                
                int node = q.front();
                q.pop();

                n--;

                for(int neighbor : graph[node]) {
                    degree[neighbor]--;

                    if(degree[neighbor] == 1)
                        q.push(neighbor);
                }
            }
        }

        vector<int> ans;

        while(!q.empty()) {
            ans.push_back(q.front());
            q.pop();
        }

        return ans;
    }
};