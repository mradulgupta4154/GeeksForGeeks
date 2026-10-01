#include <string>
#include <algorithm>

class Solution {
public:
    int findNext(int N) {
        std::string s = std::to_string(N);
        int n = s.length();

        // Step 1: Find the pivot index
        int i = n - 2;
        while (i >= 0 && s[i] >= s[i + 1]) {
            i--;
        }

        // If no pivot found, digits are in descending order
        if (i < 0) {
            return -1;
        }

        // Step 2: Find the smallest digit greater than s[i] from the right
        int j = n - 1;
        while (s[j] <= s[i]) {
            j--;
        }

        // Step 3: Swap s[i] and s[j]
        std::swap(s[i], s[j]);

        // Step 4: Reverse the remaining sequence to the right of index i
        std::reverse(s.begin() + i + 1, s.end());

        // Convert back to integer
        return std::stoi(s);
    }
};