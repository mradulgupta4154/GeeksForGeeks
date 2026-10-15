class Solution {
public:
    int solve(vector<int>& arr) {
        long long MOD = 1e9 + 7;

        // Find the maximum value in the array to size our frequency array
        int max_val = 0;
        for (int x : arr) {
            max_val = max(max_val, x);
        }

        // Frequency array for values up to max_val (constrained up to 1000)
        vector<long long> count(max_val + 1, 0);
        for (int x : arr) {
            count[x]++;
        }

        long long total_pairs = 0;
        long long smaller_elements_count = 0;

        // Iterate through each unique value from 1 to max_val
        for (int i = 1; i <= max_val; i++) {
            if (count[i] > 0) {
                // All elements smaller than 'i' can form a good pair with 'i'
                total_pairs = (total_pairs + count[i] * smaller_elements_count) % MOD;
                // Update prefix sum of smaller elements
                smaller_elements_count = (smaller_elements_count + count[i]) % MOD;
            }
        }

        return total_pairs;
    }
};