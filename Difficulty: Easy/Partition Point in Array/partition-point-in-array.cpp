#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    int findElement(std::vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return -1;

        // rightMin[i] stores the minimum element from index i to n-1
        std::vector<int> rightMin(n);
        rightMin[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rightMin[i] = std::min(rightMin[i + 1], arr[i]);
        }

        int leftMax = INT_MIN;

        // Check all elements from index 0 to n-1
        for (int i = 0; i < n; i++) {
            bool leftValid = (i == 0) || (leftMax < arr[i]);
            bool rightValid = (i == n - 1) || (arr[i] < rightMin[i + 1]);

            if (leftValid && rightValid) {
                return arr[i];
            }

            leftMax = std::max(leftMax, arr[i]);
        }

        return -1;
    }
};