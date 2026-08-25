class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>pq;
        int rows=matrix.size();
        int col=rows;
        for (int i=0;i<rows;i++){
            for (int j=0;j<col;j++){
                pq.push(matrix[i][j]);
                   
                   if (pq.size()>k){
                    pq.pop();
                   }
            }
        }
    return pq.top();}
};