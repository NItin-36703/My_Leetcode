class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int left = 0;
        string ans = "";
        queue<char> q;
        int count = 0;

        for (int right = 0; right < s.size(); right++) {

            if (s[right] == '1')
                count++;

            q.push(s[right]);

            if (count == k) {

          
                while (s[left] == '0') {
                    q.pop();
                    left++;
                }

               
                string temp = "";
                queue<char> copy = q;

                while (!copy.empty()) {
                    temp += copy.front();
                    copy.pop();
                }

                
                if (ans == "" || temp.size() < ans.size() ||
                    (temp.size() == ans.size() && temp < ans)) {
                    ans = temp;
                }

               
                q.pop();
                left++;
                count--;
            }
        }

        return ans;
    }
};