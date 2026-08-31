class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        priority_queue<pair<int,int> ,vector<pair<int,int>> ,greater<pair<int,int>>>pq;
       for (int i=0; i<nums.size() ;i++){
        pq.push({abs(nums[i]),nums[i]});
       }
       auto top=pq.top();
       pq.pop();
        pair<int,int> ans = top;

        while (!pq.empty() && pq.top().first == top.first) {
            ans = pq.top();
            pq.pop();
        }

        return ans.second;
    }
};