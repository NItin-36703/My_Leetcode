class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;//here i am using a min heap 
        for (auto it:nums){
            pq.push(it);
            if (pq.size()>k){
                pq.pop();//popping the top_most(smallest element)
            }
            }

      return pq.top();  
    }
};