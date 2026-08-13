class Solution {
public:
    bool isAnagram(string s, string t) {
      unordered_map<char,int> mp;
      for (char ch:s){
        mp[ch]++;
      }
        for (char ch:t){
            mp[ch]--;
            if (mp[ch]<0){
                return false;
            }
        }

        for (int i=0;i<mp.size();i++){
            if (mp[i]>0)return false;
        }
        
    return true;
    }
};