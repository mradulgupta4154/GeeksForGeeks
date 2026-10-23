class Solution {
public:
    string makeEven(string &s) {
        int n = s.length();
        int last_digit = s[n - 1] - '0';
        int first_smaller_even = -1;
        int last_larger_even = -1;

        // Traverse the string to find potential even digits
        for (int i = 0; i < n - 1; i++) {
            int digit = s[i] - '0';
            if (digit % 2 == 0) {
                if (digit < last_digit) {
                    // Found an even digit smaller than the last digit; 
                    // we want the first occurrence from the left.
                    first_smaller_even = i;
                    break; 
                } else {
                    // Keep track of the last occurring even digit greater than the last digit
                    last_larger_even = i;
                }
            }
        }

        // Case 1: Prioritize swapping with the first smaller even digit found from the left
        if (first_smaller_even != -1) {
            swap(s[first_smaller_even], s[n - 1]);
        }
        // Case 2: Otherwise, if there is a larger even digit, swap with the rightmost one
        else if (last_larger_even != -1) {
            swap(s[last_larger_even], s[n - 1]);
        }
        // Case 3: No even digits available, return original string

        return s;
    }
};