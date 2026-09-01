class Solution {
public:
bool is_sorted(vector<int>&nums){
    for (int i=1;i<nums.size();i++){
        if (nums[i]<nums[i-1]) return false;
    }
    return true;

}
    int minimumPairRemoval(vector<int>& nums) {
        int count=0;

        while(!is_sorted(nums)){
            priority_queue<pair<int,int> ,vector<pair<int,int>>,greater<pair<int,int>>>pq;
            for (int i=0; i<nums.size()-1; i++){
                pq.push({nums[i]+nums[i+1],i});

            }

            auto [sum,index]=pq.top();
            nums[index]=sum;
            nums.erase(nums.begin()+index+1);
                
                count++;
        }
  return count;  }
};