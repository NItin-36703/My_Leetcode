class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    int row =matrix.size();
    int col =matrix[0].size();
 // Transpose the matrix 
    for (int i=0;i<row;i++){
       for (int j=i;j<col;j++){
         swap(matrix[i][j] , matrix[j][i]); 
       }
    }
// reverse every row 
  for (int i=0;i<row;i++){
    reverse(matrix[i].begin(), matrix[i].end());
   }


    }
};