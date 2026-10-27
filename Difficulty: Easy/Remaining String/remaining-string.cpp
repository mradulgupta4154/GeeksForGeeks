class Solution {
public:
    string printString(string &s, char ch, int count) {
        int n = s.length();
        int occurrences = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == ch) {
                occurrences++;
                if (occurrences == count) {
                    // Return the substring from the next index to the end
                    if (i + 1 < n) {
                        return s.substr(i + 1);
                    } else {
                        return ""; // Remaining string is empty
                    }
                }
            }
        }

        // Character didn't appear 'count' times
        return "";
    }
};