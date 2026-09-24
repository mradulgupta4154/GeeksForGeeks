class Solution {
  public:
    int count(vector<int>& coins, int sum) {
        // dp[i] stores the number of ways to make sum i
        vector<int> dp(sum + 1, 0);

        // Base case: 1 way to make sum 0
        dp[0] = 1;

        // Process each coin one by one
        for (int coin : coins) {
            for (int i = coin; i <= sum; i++) {
                dp[i] += dp[i - coin];
            }
        }

        return dp[sum];
    }
};