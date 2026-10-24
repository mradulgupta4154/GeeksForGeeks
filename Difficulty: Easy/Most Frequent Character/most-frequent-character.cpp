class Solution {
public:
    char getMaxOccuringChar(string &s) {
        // Frequency array for all 26 lowercase English alphabets
        int freq[26] = {0};

        // Count the occurrences of each character
        for (char c : s) {
            freq[c - 'a']++;
        }

        int maxFreq = 0;
        char result = 'a';

        // Find the character with the maximum frequency
        // Iterating from 'a' to 'z' ensures that if there's a tie, 
        // the lexicographically smaller character is chosen.
        for (int i = 0; i < 26; i++) {
            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
                result = i + 'a';
            }
        }

        return result;
    }
};