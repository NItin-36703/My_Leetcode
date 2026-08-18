class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
      queue<int> q;
      for (int i =0 ;i<tickets.size() ;i++){
        q.push(i);
      }    
  int count=0;
      while (tickets[k] !=0){
       count++;
       int index=q.front();
       q.pop();
       tickets[index]--;
       if (tickets[index] > 0){
        q.push(index);}
      }
   return count; }
};