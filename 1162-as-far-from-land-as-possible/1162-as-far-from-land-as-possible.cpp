class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        vector<int> dr = {-1, 1, 0, 0};
        vector<int> dc = {0, 0, -1, 1};

        vector<vector<int>> distance(row, vector<int>(col, 0));
        queue<pair<int, int>> q;

        int land = 0;
        int water = 0;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == 1) {
                    q.push({i, j});
                    land++;
                } else {
                    water++;
                }
            }
        }

        if (land == 0 || water == 0)
            return -1;

        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++) {
                int nr = r + dr[i];
                int nc = c + dc[i];

                if (nr >= 0 && nr < row &&
                    nc >= 0 && nc < col &&
                    grid[nr][nc] == 0) {

                    grid[nr][nc] = 3;
                    distance[nr][nc] = distance[r][c] + 1;
                    q.push({nr, nc});
                }
            }
        }

        int ans = -1;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (distance[i][j] > ans) {
                    ans = distance[i][j];
                }
            }
        }

        return ans;
    }
};