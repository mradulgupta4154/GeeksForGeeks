#include <vector>
#include <algorithm>

class Solution {
public:
    int maxIndexDiff(std::vector<int>& arr) {
        int n = arr.size();
        if (n <= 1) return 0;

        std::vector<int> minLeft(n);
        std::vector<int> maxRight(n);

        // Fill minLeft array
        minLeft[0] = arr[0];
        for (int i = 1; i < n; ++i) {
            minLeft[i] = std::min(arr[i], minLeft[i - 1]);
        }

        // Fill maxRight array
        maxRight[n - 1] = arr[n - 1];
        for (int j = n - 2; j >= 0; --j) {
            maxRight[j] = std::max(arr[j], maxRight[j + 1]);
        }

        // Two-pointer approach to find maximum (j - i)
        int i = 0, j = 0;
        int maxDiff = 0;

        while (i < n && j < n) {
            if (minLeft[i] <= maxRight[j]) {
                maxDiff = std::max(maxDiff, j - i);
                j++;
            } else {
                i++;
            }
        }

        return maxDiff;
    }
};