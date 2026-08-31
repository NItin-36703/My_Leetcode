class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        unordered_map<int,int>mp;
        for (int i=0;i<row;i++){
            for (int j=0;j<col;j++){
                   mp[grid[i][j]]++;
            }
        }
        vector<int>ans(2);
        for (int i=1;i<=row*row;i++){
            if(mp[i]==2) ans[0]=i;

           else if (mp[i]==0) ans[1]=i;
        }
   return ans; }
};