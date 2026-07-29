class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map <int,bool>m;
        if (nums.size()==1){
            if (nums[0]>1 || nums[0]<1) return 1;

            return 2;
        }
        
        for (int i =0;i<nums.size();i++){
            m[nums[i]]=true;
        }
        for (int i=1;i<=nums.size()+1;i++){
            if (m[i]==false){
                return i;
            }
            else continue;
            
        }
   return 1; }
};