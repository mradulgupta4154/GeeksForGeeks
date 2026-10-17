class Solution {
public:
    int binarySubstring(string &s) {
        long long count = 0;

        // Count the total number of '1's in the string
        for (char c : s) {
            if (c == '1') {
                count++;
            }
        }

        // Number of ways to choose 2 positions from 'count' ones
        return (count * (count - 1)) / 2;
    }
};