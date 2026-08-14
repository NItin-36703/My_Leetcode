class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for (string it : strs){
            string sorted=it;
            sort(sorted.begin(), sorted.end());
             mp[sorted].push_back(it);
            
        }
    vector<vector<string>> ans;
       for (auto group : mp) {
    ans.push_back(group.second);
}
 return ans;   }
};