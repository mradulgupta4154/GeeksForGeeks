class Solution {
public:
    string merge(string &s1, string &s2) {
        string result = "";
        int i = 0, j = 0;
        int n1 = s1.length(), n2 = s2.length();

        // Loop until we reach the end of both strings
        while (i < n1 || j < n2) {
            if (i < n1) {
                result += s1[i++];
            }
            if (j < n2) {
                result += s2[j++];
            }
        }

        return result;
    }
};