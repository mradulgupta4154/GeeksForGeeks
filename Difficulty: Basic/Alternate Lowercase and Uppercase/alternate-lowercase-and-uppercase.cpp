class Solution {
public:
    string altCase(string &s) {
        // Determine whether the first character is uppercase or lowercase
        bool wantUpper = isupper(s[0]);

        for (int i = 0; i < s.length(); i++) {
            if (wantUpper) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
            // Toggle the target case for the next character
            wantUpper = !wantUpper;
        }

        return s;
    }
};