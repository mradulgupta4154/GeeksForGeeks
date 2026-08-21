class Solution {
public:
    int transform (string &s1, string &s2) {
        if (s1.length() != s2.length()) return -1;

        // Check character frequencies
        int count[256] = {0};
        for (int i = 0; i < s1.length(); i++) {
            count[s1[i]]++;
            count[s2[i]]--;
        }
        for (int i = 0; i < 256; i++) {
            if (count[i] != 0) return -1;
        }

        // Calculate minimum operations
        int i = s1.length() - 1;
        int j = s2.length() - 1;
        int res = 0;

        while (i >= 0) {
            if (s1[i] == s2[j]) {
                j--;
            } else {
                res++;
            }
            i--;
        }

        return res;
    }
};