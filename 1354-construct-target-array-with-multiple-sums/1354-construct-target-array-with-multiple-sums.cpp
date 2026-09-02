class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<long long> pq;

        long long sum = 0;

        for (int x : target) {
            pq.push(x);
            sum += x;
        }

        while (true) {

            long long largest = pq.top();
            pq.pop();

            // We reached [1,1,1,...]
            if (largest == 1)
                return true;

            long long rest = sum - largest;

            // Only one element
            if (rest == 0)
                return false;

            // If rest is 1, we can always build the largest
            if (rest == 1)
                return true;

            // Largest must be greater than the rest
            if (largest <= rest)
                return false;

            // Reverse multiple operations at once
            long long previous = largest % rest;

            // Cannot reach a valid positive value
            if (previous == 0)
                return false;

            pq.push(previous);

            sum = rest + previous;
        }
    }
};