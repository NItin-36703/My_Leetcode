class Solution {
public:
    bool isSubsequence(string s, string t) {
      if (s.size()>t.size()) 
        return false;
        int index =-1;
       
        for (auto it :s){
         bool found =false;
           for (int i=index+1;i<t.size();i++){
            if (t[i] == it && i>index){
                index=i;
                found=true;
                break ;
            }
            
           }
           if(found==false){
            return false;
           }
        }
        
    return true;    }
};