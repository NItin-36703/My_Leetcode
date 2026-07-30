class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        map<int,int>m;
        for (int i =0 ;i <nums.size() ;i++){
        m[nums[i]]++;
        }
        for (int i =1;i<=nums.size();i++){
            if (m[i] == 2)ans.push_back(i);
        }
   return ans; }
};