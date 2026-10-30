#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertToRoman(int n) {
        // Values and corresponding Roman symbols in descending order
        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        string result = "";

        for (int i = 0; i < 13; i++) {
            while (n >= values[i]) {
                result += symbols[i];
                n -= values[i];
            }
        }

        return result;
    }
};