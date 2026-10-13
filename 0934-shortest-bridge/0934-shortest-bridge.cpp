class Solution {
public:
void bfs(vector<vector<int>>& grid, int i, int j,queue<pair<int,int>>& store,vector<vector<int>>& distance){
 int row = grid.size();
int col = grid[0].size();

vector<int>dr = {-1,1,0,0};
vector<int>dc = {0,0,-1,1};
queue<pair<int,int>>q;

q.push({i,j});
grid[i][j] =2;
distance[i][j]=0;


while (!q.empty()){
    store.push(q.front());
    int r= q.front().first;
    int c= q.front().second;
    q.pop();

    for(int i=0;i<4;i++){
        int nr = r+dr[i];
        int nc = c+dc[i];
        if ( nr>= 0 && nr<row && nc>=0 && nc<col && grid [nr][nc] == 1 ){
            q.push({nr,nc});
            grid[nr][nc] =2;
            distance[nr][nc]=0;
        }
    }


}
}

int shortestBridge(vector<vector<int>>& grid) {
      int row = grid.size();
      int col = grid[0].size();

queue<pair<int,int>>store;
vector<int>dr = {-1,1,0,0};
vector<int>dc = {0,0,-1,1};

     vector<vector<int>> distance(row, vector<int>(col, -1));
int flag =0;
      for (int i=0;i<row ;i++){
        
        for (int j=0;j<col;j++){
            if (grid[i][j] == 1){
                bfs(grid,i,j,store,distance);
               
                flag =1;
                 break ;
            }
           
            
        }
         if (flag == 1)break;
      }
while (!store.empty()){
 
    int r= store.front().first;
    int c= store.front().second;
    store.pop();

    for(int i=0;i<4;i++){
        int nr = r+dr[i];
        int nc = c+dc[i];

         if ( nr>= 0 && nr<row && nc>=0 && nc<col && grid [nr][nc] == 1 ){
            return distance[r][c];
         }
        if ( nr>= 0 && nr<row && nc>=0 && nc<col && grid [nr][nc] == 0 ){
            store.push({nr,nc});
            grid[nr][nc] =2;
            distance[nr][nc]=distance[r][c]+1;
            
        }
        

    }


}
     
return 0;}
};