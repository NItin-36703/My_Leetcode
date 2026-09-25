class Solution {
public:
void bfs(vector<vector<char>>&grid ,int r,int c ,int &count){
    vector<int>dr = {-1,1,0,0};
    vector<int>dc = {0,0,-1,1};
     
     int rows= grid.size();
     int cols = grid[0].size();

     queue<pair<int,int>>q;
     q.push({r,c});
    count++;
      while(!q.empty()){
       int currR = q.front().first;
            int currC = q.front().second;

            q.pop();

            for (int i = 0; i < dr.size(); i++) {

                int nr = currR + dr[i];
                int nc = currC + dc[i];

            if (nr>=0 && nr<rows && nc>=0 && nc<cols && grid[nr][nc] =='1' ){
                q.push({nr,nc});
                grid[nr][nc] ='0';
            }
        }
     }
    
}


    int numIslands(vector<vector<char>>& grid) {
        int rows= grid.size();
        int cols = grid[0].size();
           int count =0;
        for (int i=0;i<rows;i++){
            for (int j=0;j<cols ;j++){
                if (grid[i][j] == '1'){
                    bfs(grid,i,j,count);
                }
            }
        }
    return count;}
};