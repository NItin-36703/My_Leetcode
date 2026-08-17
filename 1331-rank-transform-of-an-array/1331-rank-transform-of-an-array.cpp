class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
   int n=arr.size();
    vector<int> copy(n);
    for (int i=0;i<n;i++){
        copy[i] = arr[i];
    } 
    sort(copy.begin(),copy.end());
    unordered_map<int,int>mp;
   int rank = 1;

for (int i=0;i<n;i++){
    if(mp.find(copy[i]) != mp.end()){
        continue;
    }
    mp[copy[i]] = rank;
    rank++;
}
    vector<int> ans(n);
    for (int i=0;i<n;i++){
        ans[i]= mp[arr[i]] ;
    }
   return ans; }
};
    
