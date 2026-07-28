class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
       vector<int> nums(1002, 0);

       for (auto &trip : trips ){
         int passengers = trip[0];
         int from = trip[1];
         int to = trip[2];

         nums[from]+=passengers;
         nums[to]-=passengers;
       } 
       int current=0;
       for (int i =0;i<nums.size();i++){
        current+=nums[i];
        if (current >  capacity ) {return false;}
       }
       return true;
    }
};