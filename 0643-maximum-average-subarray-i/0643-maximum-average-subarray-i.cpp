class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left =0;
       double ans=INT_MIN;
        double sum=0;

        for (int right=0;right<nums.size();right++){
            sum+=nums[right];
        
            if (right - left +1  < k){
                continue;
            }
            else if (right-left+1==k){
                double average =sum/k;
                ans=max(ans,average);
               
                sum=sum-nums[left];
                left++;
            } 
        }
   return ans; }
};