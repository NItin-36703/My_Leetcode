class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int max_area = 0;

       heights.push_back(0);

        for (int i = 0; i < heights.size(); i++) {

            while (!st.empty() &&
                   heights[st.top()] > heights[i]) {

                int top = st.top();
                st.pop();

                int height = heights[top];

                int width;

                if (st.empty())
                    width = i;
                else
                    width = i - st.top() - 1;

                int area = height * width;

                max_area = max(max_area, area);
            }

            st.push(i);
        }

        return max_area;
    }
};