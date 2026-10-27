class Solution {
public:
    string largestNumber(int n, int s) {
        // If sum is greater than the maximum possible sum for n digits (9 * n)
        // or if sum is negative, it's impossible.
        if (s > 9 * n || s < 0) {
            return "-1";
        }

        string result = "";

        for (int i = 0; i < n; i++) {
            // Find the maximum digit we can place at the current position (up to 9)
            int digit = min(s, 9);
            result += to_string(digit);
            s -= digit;
        }

        return result;
    }
};