class Solution {
public:
    string printSequence(string &s) {
        // Mapping of characters A-Z to their corresponding mobile keypad press sequence
        string keypad[] = {
            "2",   "22",  "222", // A, B, C
            "3",   "33",  "333", // D, E, F
            "4",   "44",  "444", // G, H, I
            "5",   "55",  "555", // J, K, L
            "6",   "66",  "666", // M, N, O
            "7",   "77",  "777", "7777", // P, Q, R, S
            "8",   "88",  "888", // T, U, V
            "9",   "99",  "999", "9999"  // W, X, Y, Z
        };

        string result = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                result += "0";
            } else {
                result += keypad[s[i] - 'A'];
            }
        }

        return result;
    }
};