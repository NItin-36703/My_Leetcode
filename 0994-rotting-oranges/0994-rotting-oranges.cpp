class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
     int rows = grid.size();
     int cols = grid[0].size();

     queue<pair<int,int>>q;

     for (int i=0; i<rows;i++){
        for (int j=0;j<cols ;j++){
            if (grid[i][j] == 2){
                q.push({i,j});
            }
        }
     }

vector<int> dr {-1,1,0,0};
vector <int>dc = {0,0,-1,1};
    int count =0;
    while (!q.empty()){
        int size = q.size();
        bool rotten = false;

        while(size>0){
            size--;
            int r= q.front().first;
            int c= q.front().second;
              
              q.pop();

              for (int i=0;i<4;i++){
                int nr= r+dr[i];
                int nc = c+dc[i];

                if (nr>=0 && nr<rows && nc>=0 && nc<cols && grid[nr][nc]== 1){
                    grid[nr][nc] = 2;
                    q.push({nr,nc});
                    rotten = true;
                }
              }
        }
        if (rotten == true)count++;
    }  

    for (int i=0; i<rows;i++){
        for (int j=0;j<cols ;j++){
            if (grid[i][j] == 1){
                return -1;
            }
        }
     }

 return count;   }
};