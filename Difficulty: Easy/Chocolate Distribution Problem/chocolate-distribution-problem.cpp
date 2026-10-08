class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // If number of students is 0, difference is 0
        if (m == 0) return 0;

        // Sort the array to easily find minimum differences
        sort(a.begin(), a.end());

        // If packets are fewer than students, distribution is impossible
        if (a.size() < m) return -1;

        int min_diff = INT_MAX;

        // Check every window of size m
        for (int i = 0; i <= a.size() - m; i++) {
            // In a sorted window, min is at start, max is at end
            int diff = a[i + m - 1] - a[i];
            if (diff < min_diff) {
                min_diff = diff;
            }
        }

        return min_diff;
    }
};