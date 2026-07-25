class Solution {
public:
 int solve(vector<int>& nums, int start, int end) {
        vector<int> maxi(nums.size() + 2,0);

        maxi[end] = nums[end];
          maxi[end - 1] = max(nums[end - 1], nums[end]);

        for (int i = end - 2; i >= start; i--) {
            maxi[i] = max(maxi[i + 1], nums[i] + maxi[i + 2]);
        }

        return maxi[start];
    } 
    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 1)
            return nums[0];
        if (n == 2)
            return max(nums[0], nums[1]);

      int ans1=solve (nums, 0 ,n-2);
      int ans2= solve (nums,1, n-1);
return max(ans1,ans2);
    }
};