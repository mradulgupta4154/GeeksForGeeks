class Solution {
public:
    bool kPangram(string s, int k) {
        int totalChars = 0;
        int freq[26] = {0};
        int uniqueCount = 0;

        // Count total alphabetic characters and frequency of each letter
        for (char c : s) {
            if (c >= 'a' && c <= 'z') {
                totalChars++;
                if (freq[c - 'a'] == 0) {
                    uniqueCount++;
                }
                freq[c - 'a']++;
            }
        }

        // If total alphabetic characters are less than 26, a pangram is impossible
        if (totalChars < 26) {
            return false;
        }

        // Characters needed to complete all 26 letters
        int missingChars = 26 - uniqueCount;

        // Check if k operations are enough to cover the missing characters
        return missingChars <= k;
    }
};