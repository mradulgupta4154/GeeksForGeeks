#include <string>
#include <algorithm>

class Solution {
public:
    long long getNextEven(string x) {
        // Keep finding the next greater permutation
        while (std::next_permutation(x.begin(), x.end())) {
            // Check if the current permutation forms an even number
            if ((x.back() - '0') % 2 == 0) {
                return stoll(x);
            }
        }

        // If no greater even permutation exists
        return -1;
    }
};