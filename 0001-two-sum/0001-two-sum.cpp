class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> mp;
       for (int i=0;i<nums.size();i++)
       {
        mp[nums[i]]=i;
       } 
       vector<int> ans;
       for (int i=0;i<nums.size();i++){
        int remaining =target - nums[i];
        auto it = mp.find(remaining);
        if (it != mp.end()  && mp[remaining]>i){
          ans.push_back(i);
          ans.push_back(mp[remaining]);
          return ans;
        }
       }

 return ans;   }
};