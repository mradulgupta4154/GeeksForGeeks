#include <vector>
#include <cmath>
#include <climits>

class Solution {
public:
    std::vector<int> findClosestPair(std::vector<int> &arr1, std::vector<int> &arr2, int x) {
        int n = arr1.size();
        int m = arr2.size();

        int left = 0;
        int right = m - 1;

        int min_diff = INT_MAX;
        std::vector<int> result(2);

        while (left < n && right >= 0) {
            long long current_sum = (long long)arr1[left] + arr2[right];
            long long diff = std::abs(current_sum - x);

            // Update the closest pair found so far
            if (diff < min_diff) {
                min_diff = diff;
                result[0] = arr1[left];
                result[1] = arr2[right];
            }

            // If exact target sum is reached, return immediately
            if (current_sum == x) {
                return result;
            }

            // Move pointers based on the sum comparison
            if (current_sum > x) {
                right--;
            } else {
                left++;
            }
        }

        return result;
    }
};