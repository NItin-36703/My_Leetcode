class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
     int current=1;
     int i=0;
     vector<string>ans;
    while (i<target.size()){
    if (target[i]==current){
        ans.push_back("Push");
        current++;
        i++;
    }
   else if (target[i]!= current){
      ans.push_back("Push");
      ans.push_back("Pop");
      current++;
    }
   
     }   
   return ans; }
};