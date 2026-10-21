class Solution {
public:
    vector<int> count(string &s) {
        // 1. Initialize all counters to 0
        int l = 0, u = 0, n = 0, a = 0; 

        for (int i = 0; i < s.length(); i++) {
            // 2. Use chained if-else if so each character falls into only one category
            if (s[i] >= 'a' && s[i] <= 'z') {
                l++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z') {
                u++;
            }
            else if (s[i] >= '0' && s[i] <= '9') {
                n++;
            }
            else {
                a++; // Everything else is a special character
            }
        }

        // Return in the exact order: {lowercase, uppercase, special, numeric}
        return {u, l, n, a};
    }
};