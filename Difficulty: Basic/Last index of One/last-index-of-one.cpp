class Solution {
  public:
    int lastIndex(string &s) {
        // Iterate backwards starting from the last character
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '1') {
                return i;
            }
        }
        return -1;
    }
};