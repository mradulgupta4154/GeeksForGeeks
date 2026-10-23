class Solution {
public:
    int remainderWith7(string &n) {
        long long rem = 0;
        for (char ch : n) {
            int digit = ch - '0';
            rem = (rem * 10 + digit) % 7;
        }
        return rem;
    }
};