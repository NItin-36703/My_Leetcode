class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        int left = 0;
        vector<int> ans;
        deque<int> window;

        for (int right = 0; right < nums.size(); right++) {

            // Remove elements outside the window
            while (!window.empty() && window.front() < left) {
                window.pop_front();
            }

            // Remove elements smaller than current element
            while (!window.empty() && nums[window.back()] <= nums[right]) {
                window.pop_back();
            }

            window.push_back(right);

            // Window has size k
            if (right - left + 1 == k) {

                ans.push_back(nums[window.front()]);

                left++;
            }
        }

        return ans;
    }
};