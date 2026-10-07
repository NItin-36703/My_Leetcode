class Solution {
public:

void bfs (vector<vector<int>> & grid,int i,int j,long long  & ans,int& k){
    int rows = grid.size();
    int cols = grid[0].size();

    vector<int>dr ={-1,1,0,0};
    vector<int>dc = {0,0,-1,1};

     long long  sum =0 ;

    queue<pair<int,int >>q;
    q.push({i,j});
    sum+=grid[i][j];
    grid[i][j] =0;

    while(!q.empty() ){
        int r= q.front().first;
        int c= q.front().second;

        q.pop();
        for (int i=0;i<4;i++){
            int nr = r+dr[i];
            int nc=  c+dc[i];

            if (nr>=0 && nr<rows && nc>=0 && nc<cols && grid[nr][nc]!= 0){
                sum+= grid[nr][nc];
                q.push({nr,nc});
                grid[nr][nc]=0;
            }
        }
    }

    if (sum % k ==0 )ans++;
}
    int countIslands(vector<vector<int>>& grid, int k) {
        int rows = grid.size();
    int cols = grid[0].size();

long long  ans =0;
    for (int i=0;i<rows ;i++){
        for (int j=0;j<cols;j++){
            if (grid[i][j] != 0){
                bfs(grid,i,j,ans,k );
            }
        }
    }

    return ans;}
};