class Solution {
public:
    string frequencySort(string s) {
    unordered_map<char,int>mp;
    for(char it:s){
        mp[it]++;
    }
    priority_queue<pair<int,char>> pq;
    for (auto it:mp){
        pq.push({it.second,it.first});

    }
    string ans="";
    while(!pq.empty()){
        for(int i=0;i<pq.top().first;i++){
        ans.push_back(pq.top().second);}
        pq.pop();
    }
   return ans; }
};