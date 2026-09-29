class Solution {
public:

    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int rows =grid.size();
        if (grid[0][0] == 1 || grid[rows-1][rows-1] == 1){
            return -1;
        }
        set<pair<int,int>>s;
        vector<vector<int>> distance(rows, vector<int>(rows, 0));
        for (int i=0;i<rows;i++){
            for (int j=0;j<rows;j++){
                 if (grid[i][j] == 0){
                    s.insert({i,j});
                 }
            }
        }
        vector<int>dr={-1,1,0,0,1,1,-1,-1};
        vector<int>dc={0,0,-1,1,-1,1,-1,1};
        queue<pair<int,int>>q;
        q.push({0,0});
         auto it = s.find({0,0});
        s.erase(it);
        distance[0][0]=1;
         while (!q.empty()){
            int r= q.front().first;
            int c= q.front().second;  
            q.pop();
            for (int i=0; i<8;i++){
                int nr=r+dr[i];
                int nc=c+dc[i];

                  if (nr >= 0 && nr < rows && nc >= 0 && nc < rows) {

                    auto it = s.find({nr, nc});

                    if (it != s.end()) {
                        s.erase(it);

                        distance[nr][nc] = distance[r][c] + 1;

                        q.push({nr, nc});
                    }
                }
            }          
         }


if (distance[rows-1][rows-1] == 0)return -1;

   return distance[rows-1][rows-1];
    }
};