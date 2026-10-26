class Solution {
public:
    bool isEven(string &s) {
        int n = s.length();
        int i = n - 1;

        // Find if there is a decimal point
        bool hasDecimal = false;
        for (int j = 0; j < n; ++j) {
            if (s[j] == '.') {
                hasDecimal = true;
                break;
            }
        }

        // If there is a decimal point, ignore trailing zeros
        if (hasDecimal) {
            while (i >= 0 && s[i] == '0') {
                i--;
            }
            // If it ends with '.', or all fractional digits were zeros, skip the '.'
            if (i >= 0 && s[i] == '.') {
                i--;
            }
        }

        // If after removing trailing zeros the string is empty or invalid (though guaranteed otherwise)
        if (i < 0) return true;

        // Check the parity of the last significant digit
        int lastDigit = s[i] - '0';
        return (lastDigit % 2 == 0);
    }
};