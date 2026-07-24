class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 1)
            return nums[0];
        if (n == 2)
            return max(nums[0], nums[1]);

        vector<int> maxi(n);

        maxi[n - 1] = nums[n - 1];
        maxi[n - 2] = max(nums[n - 2], nums[n - 1]);

        for (int i = n - 3; i >= 0; i--) {
            maxi[i] = max(maxi[i + 1], nums[i] + maxi[i + 2]);
        }

        return maxi[0];
    }
};
