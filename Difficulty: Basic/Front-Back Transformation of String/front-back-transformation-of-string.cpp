class Solution {
public:
    string transformString(string &s) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = 'z' - (s[i] - 'a');
            } else if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = 'Z' - (s[i] - 'A');
            }
        }
        return s;
    }
};