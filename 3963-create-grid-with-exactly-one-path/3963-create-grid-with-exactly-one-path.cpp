class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;
        for (int i =0; i<m-1 ;i++){
           string s =".";
           while (s.size() !=  n){
            s+="#";
           }
           ans.push_back(s);

            }
        
    int i=m-1;
     string s =".";
    while (s.size() != n){
        s+= ".";
    }
   ans.push_back(s); 

    return ans;}
};