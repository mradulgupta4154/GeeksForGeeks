class Solution {
public:
    vector<int> search(string &pat, string &txt) {
        int m = pat.length();
        int n = txt.length();
        vector<int> result;

        if (m > n) return result;

        // Step 1: Compute the LPS (Longest Prefix Suffix) array
        vector<int> lps(m, 0);
        computeLPSArray(pat, m, lps);

        int i = 0; // index for txt
        int j = 0; // index for pat

        while (i < n) {
            if (pat[j] == txt[i]) {
                i++;
                j++;
            }

            if (j == m) {
                result.push_back(i - j); // Match found at index (i - j)
                j = lps[j - 1];          // Look for next matches
            }
            else if (i < n && pat[j] != txt[i]) {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }

        return result;
    }

private:
    void computeLPSArray(string &pat, int m, vector<int> &lps) {
        int len = 0; // length of the previous longest prefix suffix
        lps[0] = 0;
        int i = 1;

        while (i < m) {
            if (pat[i] == pat[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }
};