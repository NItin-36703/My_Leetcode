class Solution {
public:
void bfs(vector<vector<int>>&grid,int i,int j,int count,int & area){
    vector<int> dr={-1,1,0,0};
    vector<int> dc={0,0,-1,1};

    int rows =grid.size();
    int cols = grid[0].size();

    queue<pair<int,int>>q;
    q.push({i,j});
    grid[i][j] = 0;

    while (!q.empty()){
        int r=q.front().first;
        int c=q.front().second;
        count++;
        q.pop();

        for (int i=0;i<4;i++){
            int nr=r+dr[i];
            int nc=c+dc[i];

            if (nr>=0 && nr<rows && nc>=0 && nc<cols && grid[nr][nc]==1){
                grid[nr][nc]=0;
                q.push({nr,nc});
            }
        }
    }

    area=max(count,area);
}

int maxAreaOfIsland(vector<vector<int>>& grid) {
    int rows=grid.size();
    int cols=grid[0].size();
    int area=0;

    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            if (grid[i][j]==1){
                bfs(grid,i,j,0,area);
            }
        }
    }

    return area;
}
};