class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
      unordered_map <int,int>m;
      
      
        for (int i=0;i<nums.size();i++){
            m[nums[i]]++;
         
        }
      int duplicate =-1;
      int missing =-1;
        for ( int i=1;i<=nums.size();i++){
           
           if (m[i]==2){
            duplicate=i;
           }

  else if (m[i]==0){
    missing=i;
  }
        }
      return {duplicate,missing}  ;
    }
};