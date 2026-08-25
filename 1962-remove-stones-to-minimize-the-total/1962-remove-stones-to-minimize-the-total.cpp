class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
       priority_queue<int>pq;
       for(auto it:piles){
        pq.push(it);
       }
       int largest=0;

       while (k>0){
  largest=pq.top();
  pq.pop();
  pq.push(largest - floor(largest / 2));
  k--;
       }
       int sum=0;
       while(!pq.empty()){
        sum+=pq.top();
        pq.pop();
       }
   return sum; }
};