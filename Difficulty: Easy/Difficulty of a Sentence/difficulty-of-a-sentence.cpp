class Solution {
public:
    int calcDiff(string &s) {
        int hardWords = 0;
        int easyWords = 0;

        string word = "";
        // Append a space at the end to process the last word cleanly
        s += " ";

        for (char c : s) {
            if (c == ' ') {
                if (word.length() > 0) {
                    if (isHardWord(word)) {
                        hardWords++;
                    } else {
                        easyWords++;
                    }
                    word = "";
                }
            } else {
                word += c;
            }
        }

        return 5 * hardWords + 3 * easyWords;
    }

private:
    bool isVowel(char c) {
        c = tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

    bool isHardWord(const string &word) {
        int vowels = 0;
        int consonants = 0;
        int consecutiveConsonants = 0;
        int maxConsecutive = 0;

        for (char c : word) {
            if (isVowel(c)) {
                vowels++;
                consecutiveConsonants = 0;
            } else {
                consonants++;
                consecutiveConsonants++;
                maxConsecutive = max(maxConsecutive, consecutiveConsonants);
            }
        }

        // A word is hard if it has 4 consecutive consonants or more consonants than vowels
        return (maxConsecutive >= 4 || consonants > vowels);
    }
};