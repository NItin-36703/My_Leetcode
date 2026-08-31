class Solution {
public:

    int x_sum(vector<int>& nums, int x) {

        unordered_map<int, int> mp;

        // Store frequency
        for (auto it : nums) {
            mp[it]++;
        }

        // Build max heap
        priority_queue<pair<int, int>> pq;

        for (auto it : mp) {
            pq.push({it.second, it.first});
        }

        int ans = 0;

        while (x > 0 && !pq.empty()) {

            auto it = pq.top();
            pq.pop();

            ans += it.first * it.second;

            x--;
        }

        return ans;
    }

    vector<int> findXSum(vector<int>& nums, int k, int x) {

        int left = 0;

        vector<int> ans;
        vector<int> temp;

        for (int right = 0; right < nums.size(); right++) {

            temp.push_back(nums[right]);
            if (right - left + 1 == k) {

                ans.push_back(x_sum(temp, x));

                temp.erase(temp.begin());

                left++;
            }
        }

        return ans;
    }
};