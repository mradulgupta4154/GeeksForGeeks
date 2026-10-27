class Solution {
public:
    bool areIsomorphic(string &s1, string &s2) {
        if (s1.length() != s2.length()) return false;

        int m1[256] = {0};
        int m2[256] = {0};

        for (int i = 0; i < s1.length(); i++) {
            char c1 = s1[i];
            char c2 = s2[i];

            // If character has been seen before, check if it maps to the same expected character
            if (m1[c1] && m1[c1] != c2) return false;
            if (m2[c2] && m2[c2] != c1) return false;

            // Establish the mapping (store 1-based index or just use the character + 1)
            m1[c1] = c2;
            m2[c2] = c1;
        }

        return true;
    }
};