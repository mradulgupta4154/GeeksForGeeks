class Solution {
  public:
    long long int findMaxProduct(vector<int>& arr) {
        int n = arr.size();
        if (n == 1) return arr[0];

        long long MOD = 1e9 + 7;
        int zeroCount = 0;
        int negCount = 0;
        int maxNeg = INT_MIN;

        // First pass: gather counts and find the largest negative number (closest to 0)
        for (int x : arr) {
            if (x == 0) {
                zeroCount++;
            } else if (x < 0) {
                negCount++;
                maxNeg = max(maxNeg, x);
            }
        }

        // Edge cases: all zeros, or only one negative number with all other elements being zeros
        if (zeroCount == n || (negCount == 1 && zeroCount + negCount == n)) {
            return 0;
        }

        long long prod = 1;
        bool skippedMaxNeg = false;

        // Second pass: compute product, skipping maxNeg once if negCount is odd
        for (int x : arr) {
            if (x == 0) continue;

            // If negative count is odd, skip the single maximum negative element once
            if (negCount % 2 != 0 && x == maxNeg && !skippedMaxNeg) {
                skippedMaxNeg = true;
                continue;
            }

            prod = (prod * x) % MOD;
        }

        if (prod < 0) {
            prod = (prod + MOD) % MOD;
        }

        return prod;
    }
};