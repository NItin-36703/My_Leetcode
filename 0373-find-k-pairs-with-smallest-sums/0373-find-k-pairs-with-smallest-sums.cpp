class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {

        priority_queue<
            pair<int, vector<int>>,
            vector<pair<int, vector<int>>>,
            greater<pair<int, vector<int>>>> pq;

        
        for (int i = 0; i < nums1.size() && i < k; i++) {
            pq.push({nums1[i] + nums2[0],{i, 0} });
        }

        vector<vector<int>> ans;

        while (k > 0 && !pq.empty()) {

            auto current = pq.top();
            pq.pop();

            int i = current.second[0];
            int j = current.second[1];

           
            ans.push_back({nums1[i], nums2[j]});

            
            if (j + 1 < nums2.size()) {
                pq.push({
                    nums1[i] + nums2[j + 1],
                    {i, j + 1}
                });
            }

            k--;
        }

        return ans;
    }
};