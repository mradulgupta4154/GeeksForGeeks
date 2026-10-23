class Solution {
public:
    bool divisibleBy4(string &s) {
        int n = s.length();

        // If the string has only 1 digit
        if (n == 1) {
            int digit = s[0] - '0';
            return (digit % 4 == 0);
        }

        // Extract the last two digits
        int lastTwoDigits = (s[n - 2] - '0') * 10 + (s[n - 1] - '0');

        return (lastTwoDigits % 4 == 0);
    }
};