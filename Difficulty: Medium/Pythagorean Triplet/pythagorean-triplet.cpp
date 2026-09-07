class Solution {
public:
    bool pythagoreanTriplet(vector<int>& arr) {
        int n = arr.size();
        int max_val = 0;

        for (int x : arr) {
            max_val = max(max_val, x);
        }

        // Frequency array for squared values up to max_val * max_val
        vector<int> freq(max_val * max_val + 1, 0);
        for (int x : arr) {
            freq[x * x]++;
        }

        // Check for every pair (a, b)
        for (int i = 1; i <= max_val; i++) {
            if (freq[i * i] == 0) continue;

            for (int j = i + 1; j <= max_val; j++) {
                if (freq[j * j] == 0) continue;

                int sum_sq = i * i + j * j;

                // If sum exceeds the maximum possible square in array, break inner loop
                if (sum_sq > max_val * max_val) break;

                if (freq[sum_sq] > 0) {
                    return true;
                }
            }
        }

        return false;
    }
};