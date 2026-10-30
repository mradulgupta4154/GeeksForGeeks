class Solution {
public:
    string stringMirror(string &s) {
        int n = s.length();
        int k = 1;

        for (int i = 1; i < n; i++) {
            // If current character is strictly smaller, we always include it.
            // If current character is equal to the previous one, we include it 
            // ONLY if k > 1 (i.e., we already have a strictly decreasing sequence).
            if (s[i] < s[i - 1] || (s[i] == s[i - 1] && k > 1)) {
                k++;
            } else {
                break;
            }
        }

        string prefix = s.substr(0, k);
        string rev = prefix;
        reverse(rev.begin(), rev.end());

        return prefix + rev;
    }
};