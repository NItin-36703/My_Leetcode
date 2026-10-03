class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        set<int> Group_A;
        set<int> Group_B;

        int n = graph.size();
        vector<int> visited(n, 0);

        queue<int> q;

        for (int start = 0; start < n; start++) {

            if (visited[start] == 1)
                continue;

            q.push(start);
            Group_A.insert(start);
            visited[start] = 1;

            while (!q.empty()) {
                int node = q.front();
                q.pop();

                for (auto child : graph[node]) {

                    if (visited[child] == 0) {
                        q.push(child);
                        visited[child] = 1;

                        if (Group_A.find(node) != Group_A.end())
                            Group_B.insert(child);
                        else
                            Group_A.insert(child);
                    }

                    else {
                        if (Group_A.find(node) != Group_A.end() &&
                            Group_A.find(child) != Group_A.end())
                            return false;

                        if (Group_B.find(node) != Group_B.end() &&
                            Group_B.find(child) != Group_B.end())
                            return false;
                    }
                }
            }
        }

        return true;
    }
};