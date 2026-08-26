class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
       priority_queue<pair<int,int>>pq;
       int i=0;
       for (auto it:score){
        pq.push({it,i});
        i++;
       }
       vector<string>ans(score.size());
       int n=0;
      
        while (!pq.empty() && n<3){
            i=pq.top().second;
            pq.pop();
           if (n==0){
            ans[i]="Gold Medal";
           }
           else if (n==1){
            ans[i]="Silver Medal";
           }
           else{
            ans[i]="Bronze Medal";
           }
           n++;
        }
        

         while (!pq.empty()){
            n++;
            i=pq.top().second;
            pq.pop();
            ans[i]=to_string(n);
         }
    
   return ans; }
};