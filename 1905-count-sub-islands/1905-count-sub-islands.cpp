class Solution {
public:
void bfs (vector<vector<int>> & grid1, vector<vector<int>>&grid2, int i, int j, int& ans){
    int rows = grid1.size();
    int cols = grid2[0].size();

    vector<int>dr ={-1,1,0,0};
    vector<int>dc = {0,0,-1,1};

     int flag = 0;

    queue<pair<int,int >>q;
    q.push({i,j});
  
    if (grid1[i][j] != 1){
  flag =1;
    }
    grid2[i][j] =0;

    while(!q.empty() ){
        int r= q.front().first;
        int c= q.front().second;

        q.pop();
        for (int i=0;i<4;i++){
            int nr = r+dr[i];
            int nc=  c+dc[i];

            if (nr>=0 && nr<rows && nc>=0 && nc<cols && grid2[nr][nc]== 1){
             if (grid1[nr][nc] != 1){
                flag = 1;
              
             }
                q.push({nr,nc});
                grid2[nr][nc]=0;
            }
            
        }
    }

    if (flag == 0) ans++;
}
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int rows = grid1.size();
        int cols = grid1[0].size();

        int ans=0;
        for (int i=0 ;i<rows ;i++){
            for (int j=0;j<cols;j++){
                if (grid2[i][j] == 1){
                    bfs(grid1,grid2,i,j,ans);
                }
            }
        }
   return ans; }
};