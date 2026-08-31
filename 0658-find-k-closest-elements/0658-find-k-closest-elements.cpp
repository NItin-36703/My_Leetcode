class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;
        int distance=0;
      for (int i=0; i<arr.size(); i++){
           distance = abs(arr[i] - x);
            pq.push({distance,arr[i]});
            if (pq.size()>k){pq.pop();}
      }  

      vector<int>ans;
      while (!pq.empty()){
        ans.push_back(pq.top().second);
        pq.pop();
      }
      sort (ans.begin(),ans.end());
   return ans; }
};