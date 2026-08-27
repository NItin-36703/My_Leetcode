class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        priority_queue<int, vector<int>, greater<int>> pq;

        for (int x : nums) {
            if (x > 0) {
                pq.push(x);
            }
        }

        int ans = 0;
        int prev = -1;

        while (!pq.empty()) {
            int x = pq.top();
            pq.pop();

            if (x != prev) {
                ans++;
                prev = x;
            }
        }

        return ans;
    }
};