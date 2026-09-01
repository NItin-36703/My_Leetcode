class Solution {
public:
    char findTheDifference(string s, string t) {
       unordered_map<char,int> mp;
      for (auto st:s){
        mp[st]++;
      }
      for (auto st:t){
        mp[st]++;
      }
      for (auto it:mp){
        if (it.second%2==1){
            return it.first;
        }
      }
   return 's'; }
};