#include <vector>
#include <algorithm>

class Solution {
public:
    void replaceWithRank(std::vector<int>& arr) {
        int n = arr.size();
        std::vector<std::pair<int, int>> temp(n);

        // Store element along with its original index
        for (int i = 0; i < n; i++) {
            temp[i] = {arr[i], i};
        }

        // Sort based on element values (and index as tie-breaker naturally)
        std::sort(temp.begin(), temp.end());

        // Assign ranks to the original indices
        for (int i = 0; i < n; i++) {
            arr[temp[i].second] = i;
        }
    }
};