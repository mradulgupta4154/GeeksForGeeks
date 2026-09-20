class Solution {
  public:
    string roundToNearest(string &s) {
        int n = s.length();
        int lastDigit = s[n - 1] - '0';

        // If last digit is <= 5, round down by setting the last digit to '0'
        if (lastDigit <= 5) {
            s[n - 1] = '0';
            return s;
        }

        // If last digit is > 5, round up
        s[n - 1] = '0';
        int carry = 1;

        for (int i = n - 2; i >= 0; i--) {
            if (carry == 0) break;

            if (s[i] == '9') {
                s[i] = '0';
                carry = 1;
            } else {
                s[i] = s[i] + 1;
                carry = 0;
            }
        }

        // If carry remains after the most significant digit, prepend '1'
        if (carry == 1) {
            s = "1" + s;
        }

        return s;
    }
};