#include <iostream>
#include <string>
#include <unordered_set>

class Solution {
public:
    bool isLuckyOrNot(int n) {
        std::string s = std::to_string(n);
        int len = s.length();
        std::unordered_set<long long> products;

        // Generate all contiguous substrings
        for (int i = 0; i < len; ++i) {
            long long currentProduct = 1;
            for (int j = i; j < len; ++j) {
                // Convert char to digit
                int digit = s[j] - '0';
                currentProduct *= digit;

                // If product becomes 0, handle it, or check if already seen
                if (products.count(currentProduct)) {
                    return false; // Duplicate digit product found
                }
                products.insert(currentProduct);
            }
        }

        return true; // All digit products are distinct
    }
};