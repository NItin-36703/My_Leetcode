class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
     vector<int>ans;
      int rows = matrix.size();
      int cols = matrix[0].size();
       for (int i = 0;i < rows;i++){
        int degree =0 ;
        for (int j=0;j<cols;j++){
            if (matrix[i][j] == 1)degree++;
        }
        ans.push_back( degree);
       }
    return ans;}
};