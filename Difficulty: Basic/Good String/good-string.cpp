class Solution {
public:
    bool isGoodString(string &s) {
        int n = s.length();
        for (int i = 0; i < n - 1; i++) {
            int diff = abs(s[i] - s[i + 1]);
            // Check if the distance is 1 (normal adjacency) or 25 ('a' and 'z' wrap-around)
            if (diff != 1 && diff != 25) {
                return false;
            }
        }
        return true;
    }
};