class Solution {
public:
    bool checkPangram(string &s) {
        // Frequency array to keep track of seen alphabets (a-z)
        bool marked[26] = {false};
        int count = 0;

        for (int i = 0; i < s.length(); i++) {
            char c = s[i];

            // Check for lowercase letters
            if (c >= 'a' && c <= 'z') {
                int index = c - 'a';
                if (!marked[index]) {
                    marked[index] = true;
                    count++;
                }
            }
            // Check for uppercase letters and convert to lowercase equivalent
            else if (c >= 'A' && c <= 'Z') {
                int index = c - 'A';
                if (!marked[index]) {
                    marked[index] = true;
                    count++;
                }
            }

            // Early exit if all 26 letters are found
            if (count == 26) {
                return true;
            }
        }

        return count == 26;
    }
};