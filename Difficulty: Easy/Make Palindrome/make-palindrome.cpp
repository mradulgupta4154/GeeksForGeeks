class Solution {
public:
    bool makePalindrome(vector<string>& arr) {
        unordered_multiset<string> s(arr.begin(), arr.end());
        int selfPalindromeCount = 0;

        for (const string& str : arr) {
            // If the string is already processed/removed from set, skip
            if (s.find(str) == s.end()) continue;

            string rev = str;
            reverse(rev.begin(), rev.end());

            // Case 1: The string is its own palindrome
            if (str == rev) {
                // If it appears an odd number of times, we can allow one to be in the center
                int count = s.count(str);
                if (count % 2 != 0) {
                    selfPalindromeCount++;
                    if (selfPalindromeCount > 1) return false;
                }
                // Remove all instances of this self-palindromic string
                s.erase(str);
            } 
            // Case 2: The string and its reverse are different
            else {
                if (s.count(rev) != s.count(str)) {
                    return false; // Mismatched counts of string and its reverse
                }
                // Remove both string and its reverse from the multiset
                s.erase(str);
                s.erase(rev);
            }
        }

        return true;
    }
};