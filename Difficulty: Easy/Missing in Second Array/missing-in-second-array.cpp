#include <vector>
#include <unordered_set>

class Solution {
public:
    std::vector<int> findMissing(std::vector<int>& a, std::vector<int>& b) {
        // Store all elements of b in an unordered_set for O(1) lookup time
        std::unordered_set<int> st(b.begin(), b.end());

        std::vector<int> result;

        // Iterate through array 'a' and preserve its original order
        for (int num : a) {
            // If num is not found in set 'st', it's missing in b
            if (st.find(num) == st.end()) {
                result.push_back(num);
            }
        }

        return result;
    }
};