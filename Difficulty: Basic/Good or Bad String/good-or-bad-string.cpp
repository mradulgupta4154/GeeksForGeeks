class Solution {
public:
    bool isGoodOrBad(string &s) {
        int vowelCount = 0;
        int consonantCount = 0;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            // Check if character is a vowel
            bool isVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');

            if (isVowel) {
                vowelCount++;
                consonantCount = 0; // Reset consonant streak
            } else if (ch == '?') {
                // Wildcard can act as either, so we increment both streaks
                vowelCount++;
                consonantCount++;
            } else {
                // It's a consonant
                consonantCount++;
                vowelCount = 0; // Reset vowel streak
            }

            // If any condition is violated, the string is BAD (return false)
            if (vowelCount > 5 || consonantCount > 3) {
                return false;
            }
        }

        // If no violations are found, the string is GOOD
        return true;
    }
};