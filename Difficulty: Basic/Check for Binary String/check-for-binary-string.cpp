class Solution {
public:
    bool isBinary(string &s) {
        for (char c : s) {
            if (c != '0' && c != '1') {
                return false;
            }
        }
        return true;
    }
};