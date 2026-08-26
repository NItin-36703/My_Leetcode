class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        for (int i=0;i<nums.size();i++)
        {
            pq.push({nums[i],i});
        }
       vector<int> indices;
vector<int> ans;


while(k > 0) {
    indices.push_back(pq.top().second);
    pq.pop();
    k--;
}


sort(indices.begin(), indices.end());


for(int i : indices) {
    ans.push_back(nums[i]);
}
    return ans;}
    };