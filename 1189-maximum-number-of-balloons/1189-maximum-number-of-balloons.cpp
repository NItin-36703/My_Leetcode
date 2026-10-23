class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int> mp;
        for (auto it : text) {
            mp[it]++;
        }

        int least = INT_MAX;


        return min({mp['b'], mp['a'], mp['n'], mp['l'] / 2, mp['o'] / 2});
    }
};