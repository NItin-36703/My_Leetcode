class Solution {
public:
    int maxProduct(vector<int>& nums) {
      int maxi = INT_MIN;
      int second_max = INT_MIN;

      for (int i =0; i<nums.size() ; i++){
        if (nums[i] > maxi){
            second_max = maxi;
            maxi =nums[i];
        }
        else if(nums[i] > second_max){
            second_max = nums[i];}
        } 
      
  return (maxi-1)*(second_max-1);  }
};