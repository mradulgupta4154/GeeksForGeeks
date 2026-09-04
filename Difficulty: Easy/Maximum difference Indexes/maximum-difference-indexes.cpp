#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    int maxGap(std::vector<int>& arr) {
        std::unordered_map<int, int> first_idx;
        int max_gap = 0;

        for (int i = 0; i < arr.size(); ++i) {
            // If the element is seen for the first time, store its index
            if (first_idx.find(arr[i]) == first_idx.end()) {
                first_idx[arr[i]] = i;
            } else {
                // Calculate distance from first appearance and update max_gap
                max_gap = std::max(max_gap, i - first_idx[arr[i]]);
            }
        }

        return max_gap;
    }
};