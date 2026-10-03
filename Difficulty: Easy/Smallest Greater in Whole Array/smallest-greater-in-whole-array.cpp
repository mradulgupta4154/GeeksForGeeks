#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> greaterElement(std::vector<int>& arr) {
        int n = arr.size();

        // Step 1: Create a sorted copy of unique elements
        std::vector<int> sortedArr = arr;
        std::sort(sortedArr.begin(), sortedArr.end());
        sortedArr.erase(std::unique(sortedArr.begin(), sortedArr.end()), sortedArr.end());

        std::vector<int> result(n);

        // Step 2: Find smallest strictly greater element using binary search
        for (int i = 0; i < n; ++i) {
            auto it = std::upper_bound(sortedArr.begin(), sortedArr.end(), arr[i]);

            if (it == sortedArr.end()) {
                result[i] = -10000000;
            } else {
                result[i] = *it;
            }
        }

        return result;
    }
};