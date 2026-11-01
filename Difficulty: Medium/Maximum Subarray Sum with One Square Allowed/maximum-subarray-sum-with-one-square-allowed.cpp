class Solution {
public:
    int maximumSubarray(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return 0;

        long long dp0 = arr[0]; // Max sum ending at current index with 0 squares
        long long dp1 = (long long)arr[0] * arr[0]; // Max sum ending at current index with 1 square

        long long maxSum = max(dp0, dp1);

        for (int i = 1; i < n; ++i) {
            long long val = arr[i];
            long long valSq = (long long)val * val;

            // Next states
            long long next_dp0 = max(val, dp0 + val);
            long long next_dp1 = max({valSq, dp0 + valSq, dp1 + val});

            dp0 = next_dp0;
            dp1 = next_dp1;

            maxSum = max({maxSum, dp0, dp1});
        }

        return maxSum;
    }
};