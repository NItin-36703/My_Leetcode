class Solution {
public:
    int fillCups(vector<int>& amount) {
       priority_queue<int> pq;
        for (auto it:amount){
            if (it>0) pq.push(it);
        }
       
        int count =0;
        int first=0;
        int second=0;
        while (pq.size() >=2){
           first=pq.top();
           pq.pop();

           second=pq.top();
           pq.pop();
           
           count++;
           first--;
           second--;
           if (second >0 )pq.push(second);
            if (first >0) pq.push(first);     
        }

        if (!pq.empty ()){
            count+=pq.top();
        }

return count;
    }
};