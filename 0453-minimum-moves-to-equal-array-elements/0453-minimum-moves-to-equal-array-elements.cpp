class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int smallest = INT_MAX;
        int sum = 0;

        for (auto it : nums) {
            sum += it;
            smallest = min(smallest, it);
        }

        int count = sum - (n * smallest);

        return count;
    }
};