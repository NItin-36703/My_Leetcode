class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int num1=0;
        int num2=0;
        int ans=0;
        for (int i=0; i<tokens.size(); i++){
            if (tokens[i]=="+" ){
               
            num1 =st.top();
             st.pop();
              num2 =st.top();
              st.pop();
      ans=num1+num2;
      st.push(ans);
            }
             else if (tokens[i]=="-" ){
               
            num1 =st.top();
             st.pop();
              num2 =st.top();
              st.pop();
      ans=num2-num1;
      st.push(ans);
            }
             else if (tokens[i]=="*" ){
               
            num1 =st.top();
             st.pop();
              num2 =st.top();
              st.pop();
      ans=num1*num2;
      st.push(ans);
            }
             else if (tokens[i]=="/" ){
               
            num1 =st.top();
             st.pop();
              num2 =st.top();
              st.pop();
      ans=num2/num1;
      st.push(ans);
            }
             else {
                st.push(stoi(tokens[i]));
             }
        }
   return st.top(); }
};