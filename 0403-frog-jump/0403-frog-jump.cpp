class Solution {
public:
    unordered_map<int, int> posToIndex;
    map<pair<int, int>, bool> memo;
    vector<int> stones;

    bool dfs(int index, int lastJump) {
        
        if (index == stones.size() - 1)
            return true;
     
        if (memo.count({index, lastJump}))
            return memo[{index, lastJump}];

      
 for (int jump = lastJump - 1; jump <= lastJump + 1; jump++) {
            if (jump <= 0)
                continue;

     int nextPos = stones[index] + jump;

            if (posToIndex.count(nextPos)) {
                int nextIndex = posToIndex[nextPos];

         if (dfs(nextIndex, jump))
                    return memo[{index, lastJump}] = true;
            }
        }

        return memo[{index, lastJump}] = false;
    }

    bool canCross(vector<int>& s) {
        stones = s;

        if (stones.size() > 1 && stones[1] != 1)
            return false;

        for (int i = 0; i < stones.size(); i++)
            posToIndex[stones[i]] = i;

        return dfs(0, 0);
    }
};