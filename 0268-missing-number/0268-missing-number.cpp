class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if (nums.size()==1){
            if (nums[0]>1 || nums[0]==0){
                return 1;

                return 2;
            }
        }
        map<int,int> m;
        for (int i=0;i<nums.size();i++){
            m[nums[i]]=1;
        }
        for (int i=0;i<nums.size()+1;i++){
            if (m[i] == 0) return i;

            else continue;
        }
    
  return 0;  }
};