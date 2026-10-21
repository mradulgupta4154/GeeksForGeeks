class Solution {
public:
    int isSame(string &s) {
        int i = s.length() - 1;
        while (i >= 0 && isdigit(s[i])) {
            i--;
        }

        string prefixLenStr = to_string(i + 1);
        string numStr = s.substr(i + 1);

        // Remove leading zeros from the number string for accurate comparison
        int firstNonZero = 0;
        while (firstNonZero < numStr.length() - 1 && numStr[firstNonZero] == '0') {
            firstNonZero++;
        }
        numStr = numStr.substr(firstNonZero);

        return (prefixLenStr == numStr) ? 1 : 0;
    }
};