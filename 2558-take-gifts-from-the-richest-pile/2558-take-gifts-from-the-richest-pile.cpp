class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
      priority_queue<int>pq;
      for (auto it:gifts){
        pq.push(it);
      }  
      int greatest=0;
      while(k>0){
        greatest=pq.top();
        pq.pop();
        pq.push(sqrt(greatest));
        k--;
      }
      long long sum=0;
      while (!pq.empty()){
        sum+=pq.top();
        pq.pop();
      }
  return sum;  }
};