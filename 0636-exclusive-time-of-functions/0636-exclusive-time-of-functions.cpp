class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        stack<int> st;
        vector<int> ans(n,0);
       int  prevtime=0;
        for (auto log:logs){
           string id,status,Time;
           stringstream ss(log);

            getline(ss, id, ':');
           getline(ss, status, ':');
             getline(ss, Time, ':');
             int function_id=stoi(id);
             int time=stoi(Time);

          if (status == "start"){
            if (!st.empty()){
            ans[st.top()] += time - prevtime;
            }
            st.push(function_id);
            prevtime=time;
          }
          else {
            ans[st.top()] += time - prevtime+1;
            st.pop();
            prevtime=time+1;
          }
        }
        
   return ans; }
};