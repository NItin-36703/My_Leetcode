class Solution {
public:
void fish (vector<vector<int>>&grid ,int i , int j,int count ,int & ans){
    
            int rows = grid.size();
        int cols = grid[0].size();

        vector<int>dr ={-1,1,0,0};
        vector<int>dc = {0,0,-1,1};

    queue<pair<int,int>>q;
    q.push({i,j});
    count += grid[i][j];
    grid[i][j] =0;
   

    while (!q.empty()){
        int r= q.front().first;
        int c= q.front().second;
     q.pop();
  
        
        for (int i =0;i <4 ;i++){
            int nr= r+dr[i];
            int nc= c+dc[i];

            if (nc>=0 && nc<cols && nr>=0 && nr<rows && grid[nr][nc] != 0){
                q.push({nr,nc});
                   count += grid[nr][nc];
                grid[nr][nc] =0;
            }
        }
    }
    ans = max(count,ans);
}
    int findMaxFish(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
    
  int ans = 0;
    for (int i=0 ;i <rows ;i++){
        for (int j=0;j<cols ;j++){
           
            if (grid[i][j] != 0){
              fish(grid,i,j,0,ans);
            
            }
        }
    }
        
  return ans;  }
};