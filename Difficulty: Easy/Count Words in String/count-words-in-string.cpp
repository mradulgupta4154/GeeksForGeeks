class Solution {
public:
    int countWords(string &s) {
        int count = 0;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            // Check if current character is part of a word (not a separator)
            if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t') {
                // It's the start of a word if it's the first character 
                // or if the preceding character was a separator
                if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t') {
                    count++;
                }
            }
        }

        return count;
    }
};