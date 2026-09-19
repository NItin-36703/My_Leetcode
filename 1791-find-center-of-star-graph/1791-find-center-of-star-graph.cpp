class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
      int n = edges.size() + 1;
        vector<int> nodes_connected(n + 1, 0);

        for (int i = 0; i < edges.size(); i++) {
            int x = edges[i][0];
            int y = edges[i][1];

            nodes_connected[x]++;
            nodes_connected[y]++;
        }

        for (int i = 1; i <= n; i++) {
            if (nodes_connected[i] == n - 1)
                return i;
        }

        return 0;
    }
};