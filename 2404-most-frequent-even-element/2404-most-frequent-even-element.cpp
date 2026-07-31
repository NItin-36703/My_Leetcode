class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
      unordered_map<int,int> m;
      for (int i=0;i<nums.size();i++){
        if (nums[i]%2==0){
            m[nums[i]]++;
        }
    
      }
      vector <pair<int,int>>freq;
      for(auto it:m){
       freq.push_back({it.second,it.first});
      }
      if(freq.size()==0) return -1;
      if (freq.size()==1){
        pair<int,int> ans =freq[0];
      return ans.second;
      }
       sort (freq.begin(),freq.end());
       for (int i=freq.size()-1;i>=0;i--){
        
        pair<int,int> last=freq[i];
        if (i==0){return last.second;}
        pair<int,int> prev=freq[i-1];
        if (last.first != prev.first){
            return last.second;
        }
       }
   return 0; }
};