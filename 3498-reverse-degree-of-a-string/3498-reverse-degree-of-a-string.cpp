class Solution {
public:
    int reverseDegree(string s) {
        int ans =0;
        char ch;
        for (int i=0;i<s.size();i++){
            ch=s[i];
            int reversed = 26 -(ch - 'a');
            ans+=reversed*(i+1);
        }
   return ans; }
};