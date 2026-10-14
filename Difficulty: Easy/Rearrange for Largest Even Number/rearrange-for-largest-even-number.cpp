#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestEven(string &s) {
        // Count the frequency of each digit
        vector<int> count(10, 0);
        for (char c : s) {
            count[c - '0']++;
        }

        int n = s.size();
        // If the total string sorted descending ends in an even digit, we are done.
        // But let's construct the optimal string directly.

        // Find the smallest even digit present to place at the end (for an even result)
        // or we just sort everything descending first.
        string res = "";
        for (int i = 9; i >= 0; i--) {
            res.append(count[i], '0' + i);
        }

        // If the number is already even, return it
        if ((res.back() - '0') % 2 == 0) {
            return res;
        }

        // Otherwise, we must find the smallest even digit to move to the very end
        int even_digit = -1;
        for (int i = 0; i <= 8; i += 2) {
            if (count[i] > 0) {
                even_digit = i;
                break;
            }
        }

        // If no even digit exists, we cannot form an even number, 
        // so the problem requires the largest possible odd number (which is `res`).
        if (even_digit == -1) {
            return res;
        }

        // If an even digit exists, remove one instance of it from its current sorted position
        // and append it to the very end.
        // Reconstruct: 
        string final_res = "";
        count[even_digit]--; // Use one for the end

        for (int i = 9; i >= 0; i--) {
            final_res.append(count[i], '0' + i);
        }
        final_res.push_back('0' + even_digit); // Place smallest even digit at the end

        return final_res;
    }
};