class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> right_max(n);
    right_max[n-1]=0;
        for (int i=n-2; i>=0; i--){
           right_max[i]= max(right_max[i+1],prices[i+1]);

        } 
        int ans =0;
        for (int i=0;i<n;i++){
  ans=max(ans,(right_max[i]-prices[i]));
        }  
   return ans; }
};