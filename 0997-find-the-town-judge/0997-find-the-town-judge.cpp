class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>trusts(n,0);
        vector<int>trusted_by (n,0);
        for (auto peoples : trust){
            int a = peoples[0]-1;
            int b = peoples[1]-1;

            trusted_by[b]++;
            trusts[a]++;


        }
    for (int i =0 ;i <trusts.size();i++){
        if (trusts[i] == 0 && trusted_by[i] == n-1){
            return i+1;
        }
    }
return -1;
    }
};