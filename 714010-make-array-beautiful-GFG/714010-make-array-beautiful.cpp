#include <vector>

class Solution {
public:
    std::vector<int> makeBeautiful(std::vector<int> arr) {
        std::vector<int> st; // Using vector as a stack

        for (int num : arr) {
            if (st.empty()) {
                st.push_back(num);
            } else {
                // Check if top element and current element have opposite signs
                // Note: 0 is considered positive (>= 0)
                bool topIsNegative = st.back() < 0;
                bool currentIsNegative = num < 0;

                if (topIsNegative != currentIsNegative) {
                    st.pop_back(); // Remove opposite sign pair
                } else {
                    st.push_back(num); // Same sign, push to stack
                }
            }
        }

        return st;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna