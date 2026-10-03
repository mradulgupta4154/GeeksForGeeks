#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    int maximumSum(std::vector<std::vector<int>>& arr) {
        int n = arr.size();
        int m = arr[0].size();

        // Find the maximum element in the last row
        int prev_max = INT_MIN;
        for (int j = 0; j < m; ++j) {
            prev_max = std::max(prev_max, arr[n - 1][j]);
        }

        int total_sum = prev_max;

        // Traverse backwards from the second-to-last row up to the first row
        for (int i = n - 2; i >= 0; --i) {
            int current_max = INT_MIN;

            // Look for the largest element in row i strictly less than prev_max
            for (int j = 0; j < m; ++j) {
                if (arr[i][j] < prev_max) {
                    current_max = std::max(current_max, arr[i][j]);
                }
            }

            // If no valid element is found, valid sequence cannot be formed
            if (current_max == INT_MIN) {
                return 0;
            }

            total_sum += current_max;
            prev_max = current_max;
        }

        return total_sum;
    }
};