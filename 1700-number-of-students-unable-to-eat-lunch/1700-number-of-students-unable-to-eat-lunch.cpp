class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
      stack<int>st;
      for (int i=sandwiches.size()-1;i>=0;i--){
        st.push(sandwiches[i]);
      } 
        queue<int>q;
        for (int i=0;i<students.size();i++){
            q.push(students[i]);
        }
        int count=0;
        while (!q.empty() && count<q.size()){
           
            if (st.top()==q.front()){
                st.pop();
                q.pop();
                count=0;
            }
            else {
                int stu=q.front();
                q.pop();
                q.push(stu);
                count++;
            }
        }
    return q.size();}
};