class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        stack<char>st;
        for (auto it : s){//here i push all the characters converted to uppercase in the stack st  
            if (it != '-') st.push(toupper(it));
        }
        int n=st.size()/k;
        stack<char> temp;
        if (st.size()%k != 0) n++;
        while (n>0){
            if (n == 1){
                while (!st.empty()){
                   temp.push(st.top());
                   st.pop();
                }
                break;
            }
                for (int i=0;i<k;i++){
                    temp.push(st.top());
                    st.pop();
                }
                temp.push('-');
                n--;

            }
            string ans="";
     while (!temp.empty()){
        ans.push_back(temp.top());
        temp.pop();
     }
  return ans;  }
};