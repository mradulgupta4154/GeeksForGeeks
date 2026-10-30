class Solution {
public:
    int equalPairs(string &s) {
        // Frequency array for lowercase English letters ('a' through 'z')
        vector<int> freq(26, 0);

        // Count frequencies of each character
        for (char c : s) {
            freq[c - 'a']++;
        }

        int totalPairs = 0;

        // For each character, add count * count to the total pairs
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                totalPairs += freq[i] * freq[i];
            }
        }

        return totalPairs;
    }
};