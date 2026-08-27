class Solution {
public:
    int largestInteger(int num) {
        priority_queue<char> pq1; // even
        priority_queue<char> pq2; // odd

        string s = to_string(num);

        int i = 0;

        while (i < s.size()) {
            if ((s[i] - '0') % 2 == 0) {
                pq1.push(s[i]);
            }
            else {
                pq2.push(s[i]);
            }
            i++;
        }

        int j = 0;
        string ans = "";

        while (j < s.size()) {

            if ((s[j] - '0') % 2 == 0) {
                ans.push_back(pq1.top());
                pq1.pop();
            }
            else {
                ans.push_back(pq2.top());
                pq2.pop();
            }

            j++;
        }

        return stoi(ans);
    }
};