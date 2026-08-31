class Solution {
  public:
    string maxZero(vector<string> &arr) {
        string result = "-1";
        int maxZeroes = 0;

        for (const string &s : arr) {
            int currentZeroes = 0;
            for (char ch : s) {
                if (ch == '0') {
                    currentZeroes++;
                }
            }

            if (currentZeroes > 0) {
                if (currentZeroes > maxZeroes) {
                    maxZeroes = currentZeroes;
                    result = s;
                } else if (currentZeroes == maxZeroes) {
                    // Tie-breaker: choose the larger number
                    // If lengths differ, the longer string represents a larger number
                    if (s.length() > result.length()) {
                        result = s;
                    } else if (s.length() == result.length() && s > result) {
                        result = s;
                    }
                }
            }
        }

        return result;
    }
};