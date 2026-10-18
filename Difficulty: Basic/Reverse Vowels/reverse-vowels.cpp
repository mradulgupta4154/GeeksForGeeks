class Solution {
private:
    bool isVowel(char c) {
        c = tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

public:
    string modify(string &s) {
        int left = 0, right = s.length() - 1;

        while (left < right) {
            // Move left pointer until a vowel is found
            while (left < right && !isVowel(s[left])) {
                left++;
            }
            // Move right pointer until a vowel is found
            while (left < right && !isVowel(s[right])) {
                right--;
            }

            // Swap the vowels
            if (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};