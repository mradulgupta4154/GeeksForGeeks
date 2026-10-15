#include <vector>
#include <unordered_set>

class Solution {
public:
    vector<int> twoSum(vector<int> &arr, int target) {
        unordered_set<int> seen;

        for (int i = 0; i < arr.size(); i++) {
            int complement = target - arr[i];

            // Check if the complement already exists in our set
            if (seen.find(complement) != seen.end()) {
                return {complement, arr[i]};
            }

            // Add the current element to the set
            seen.insert(arr[i]);
        }

        // Return an empty vector if no pair is found
        return {};
    }
};