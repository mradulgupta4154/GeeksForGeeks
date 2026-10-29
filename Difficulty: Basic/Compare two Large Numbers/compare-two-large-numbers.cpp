class Solution {
public:
    int check(string &a, string &b) {
        // Find the first non-zero character in both strings
        int i = a.find_first_not_of('0');
        int j = b.find_first_not_of('0');

        // If a string contains only zeros, its effective start is the end of the string
        string cleanA = (i == string::npos) ? "0" : a.substr(i);
        string cleanB = (j == string::npos) ? "0" : b.substr(j);

        // Compare lengths of the cleaned strings
        if (cleanA.length() < cleanB.length()) return 1;
        if (cleanA.length() > cleanB.length()) return 2;

        // If lengths are equal, compare lexicographically
        if (cleanA < cleanB) return 1;
        if (cleanA > cleanB) return 2;

        // Both numbers are equal
        return 3;
    }
};