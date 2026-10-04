class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<vector<int>> graph(edges.size() + 1);

        for (auto it : edges) {
            int x = it[0];
            int y = it[1];

            vector<int> visited(edges.size() + 1, 0);

            queue<int> q;
            q.push(x);
            visited[x] = 1;

            bool found = false;

            while (!q.empty()) {
                int curr = q.front();
                q.pop();

                if (curr == y) {
                    found = true;
                    break;
                }

                for (auto neighbour : graph[curr]) {
                    if (visited[neighbour] == 0) {
                        visited[neighbour] = 1;
                        q.push(neighbour);
                    }
                }
            }

            if (found) {
                return {x, y};
            }

            graph[x].push_back(y);
            graph[y].push_back(x);
        }

        return {};
    }
};