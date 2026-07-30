class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        vector<int> ans;
       for (int i=0;i<nums.size();i++){
      m[nums[i]]++;
       } 
       vector<pair<int,int>> freq;
      for(auto in :m){
        freq.push_back({in.second,in.first});
      }
  sort (freq.begin(),freq.end());

  for (int i =freq.size()-1;i>=0;i--){
    if (k==0) return ans;

      pair<int,int>current = freq[i];
      ans.push_back(current.second);
      k--;
           

  }
    return ans;  }
};