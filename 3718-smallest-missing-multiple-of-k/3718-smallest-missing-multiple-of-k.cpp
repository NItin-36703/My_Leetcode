class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for (int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=1;i<=101;i++){
            if (mp.count(k*i) ==0){
                return k*i;
            }
        }
   return 0; }
};