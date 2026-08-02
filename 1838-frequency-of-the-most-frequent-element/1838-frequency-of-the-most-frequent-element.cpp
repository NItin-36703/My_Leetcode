class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
       int left =0;
       long long  sum=0;
       int ans =0;
       sort (nums.begin(),nums.end());
        for (int right=0;right<nums.size();right++) {
        sum += nums[right];
        while (1LL* nums[right] * (right - left + 1) - sum > k) {
            sum -= nums[left];
            left++;
        }

        ans = max(ans, right - left + 1);
    }

   return ans; }
};