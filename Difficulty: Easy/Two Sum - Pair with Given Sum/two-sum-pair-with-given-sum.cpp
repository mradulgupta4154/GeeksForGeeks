#include <vector>
#include <unordered_map>

class Solution {
public:
    bool twoSum(std::vector<int>& arr, int target) {
        std::unordered_map<int, int> seen;

        for (int i = 0; i < arr.size(); ++i) {
            int complement = target - arr[i];

            // If the complement is already in the map, a pair exists
            if (seen.find(complement) != seen.end()) {
                return true;
            }

            // Otherwise, add the current element to the map
            seen[arr[i]] = i;
        }

        return false;
    }
};