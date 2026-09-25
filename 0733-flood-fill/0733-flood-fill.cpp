class Solution {
public:
void dfs(vector<vector<int>>& image ,int i,int j,int start_color ,int color){
    int rows = image.size();
    int cols = image [0].size();

    if (i<0 || i>= rows || j<0 || j>=cols)return;

    if (image[i][j]!= start_color)return;

    image[i][j] = color;
     dfs(image ,i-1 ,j,start_color,color);
     dfs(image ,i ,j-1,start_color,color);
     dfs(image ,i ,j+1,start_color,color);
     dfs(image ,i+1 ,j,start_color,color);
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
       int start_color =image[sr][sc];
      if (image[sr][sc] == color){
        return image;
      }

      dfs(image,sr,sc,start_color,color);
    return image;
    }
};