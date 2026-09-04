class Solution {
  public:
    int leftCandies(int n, int m) {
        // Total candies distributed in one full round (1 + 2 + ... + n)
        long long sum_one_round = (long long)n * (n + 1) / 2;

        // Eliminate full rounds to prevent time limit exceeded
        m %= sum_one_round;

        // Distribute remaining candies student by student
        for (int i = 1; i <= n; i++) {
            if (m >= i) {
                m -= i;
            } else {
                break; // Stop when student i needs more candies than remaining
            }
        }

        return m;
    }
};