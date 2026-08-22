class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int>st;
        st.push(0);
        vector<int> ans(prices.size(), 0);
        for(int i=1;i<prices.size();i++){
            
            while (!st.empty() && prices[st.top()] >= prices[i])
            {
            ans[st.top()] = prices[st.top()]-prices[i];
            st.pop();
            
            }
            st.push(i);
          
        }

        while (!st.empty()){
            ans[st.top()]=prices[st.top()];
            st.pop();
        }
                

   return ans; }
};