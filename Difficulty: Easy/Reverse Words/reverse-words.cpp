class Solution {
public:
    string reverseWords(string &s) {
        int n = s.length();
        string result = "";
        int i = n - 1;

        while (i >= 0) {
            // Skip trailing or intermediate dots
            while (i >= 0 && s[i] == '.') {
                i--;
            }
            if (i < 0) break;

            // Find the end of the current word
            int j = i;
            while (i >= 0 && s[i] != '.') {
                i--;
            }

            // Extract the word (from i + 1 to j)
            string word = s.substr(i + 1, j - i);

            // Append the word to the result
            if (result.length() == 0) {
                result = word;
            } else {
                result += "." + word;
            }
        }

        return result;
    }
};