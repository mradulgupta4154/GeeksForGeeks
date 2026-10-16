class Solution {
public:
    int firstOccurence(string &txt, string &pat) {
        int n = txt.length();
        int m = pat.length();

        // Loop through txt up to the point where pat can still fit
        for (int i = 0; i <= n - m; i++) {
            int j = 0;
            // Check characters of the pattern
            while (j < m && txt[i + j] == pat[j]) {
                j++;
            }
            // If all characters matched, return the starting index
            if (j == m) {
                return i;
            }
        }

        // If the pattern is not found
        return -1;
    }
};