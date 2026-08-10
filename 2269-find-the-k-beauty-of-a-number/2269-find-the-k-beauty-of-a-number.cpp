class Solution {
public:
    int divisorSubstrings(int num, int k) {
      int left =0;
      int ans =0;
  string s=to_string(num); 
  string demo="";
      for (int right=0; right<s.size(); right++){
        demo.push_back(s[right]);
        int divisor =stoi(demo);
        if (right-left+1 != k){
            continue;
        }
         else if( divisor != 0 &&  num%divisor == 0){
            ans+=1; 
         }   
          left++;
            demo.erase(0,1);    
      }  
   return ans; }
};