class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;     
      int one=0;
      int two=0;
      int distance=0;
      for (int i=0;i<points.size();i++){
        one=points[i][0];
        two=points[i][1];
        distance=(one*one) +(two*two);
        pq.push({distance,i});
      } 
      vector<vector<int>> ans;
      while(k>0){
        ans.push_back(points[pq.top().second]);
        pq.pop();
        k--;
      }
  return ans;  }
};