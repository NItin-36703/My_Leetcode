class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int rows = maze.size();
        int cols  = maze[0].size();
        vector<int>dr={-1,1,0,0};
        vector<int>dc = {0,0,-1,1};

       vector<vector<int>> distance(rows, vector<int>(cols));
       int i =entrance[0];
       int j=entrance[1];
        queue<pair<int,int>> q;
        q.push({i,j});
        maze[i][j] ='+';
        distance [i][j] =0;

        while(!q.empty()){
            int r= q.front().first;
            int c= q.front().second;
              
           
            q.pop();
            for (int i=0;i<4;i++){
       int nr = r+dr[i];
       int nc = c+dc[i];

       if (nr>=0 && nr<rows && nc>= 0 && nc< cols && maze[nr][nc] == '.'){
        q.push({nr,nc});
        maze[nr][nc] = '+';
        distance[nr][nc] = distance [r][c] +1;
           if (nr==0 || nr==rows-1 || nc ==0 || nc== cols-1){
                return distance[nr][nc];
              }
       }
       
            }
        }
    return -1;}
};