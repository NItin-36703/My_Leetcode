class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int row = isConnected.size();
        int col =isConnected [0].size();
        int count =0;
        int n = isConnected.size();
        vector<int>visited(n,0);
        for (int i =0;i<n;i++){
            if (visited[i] == 0){
                queue<int>q;
                count++;
                visited[i] = 1;
                q.push(i);
                while(!q.empty()){
                    int vertex = q.front();
                    q.pop();

                    for (int j=0;j<col;j++){
                        if (j == vertex){
                            continue;
                        }
                        else if ( isConnected [vertex][j] == 1  && visited[j] == 0){
                           {
                           q.push(j);
                           visited[j] = 1;

                            }
                        }

                    }
                }
            }
        }
   return count; }
};