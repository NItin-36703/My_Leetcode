class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int rows=grid.size();
        int col=grid[0].size();
        vector< priority_queue<int>>pq;
        for (int i=0;i<rows;i++){
            priority_queue<int>temp;
            for (int j=0;j<col;j++){
                temp.push(grid[i][j]);
            }
            pq.push_back(temp);

        }
        int ans=0;
        for (int i=0;i<col;i++){
            vector<int>copy;
            int maxi=INT_MIN;
            for (int j=0;j<pq.size();j++)
            {
               maxi=max(maxi,pq[j].top());
               pq[j].pop();

            }
             ans += maxi;
        }
   return ans; }
};