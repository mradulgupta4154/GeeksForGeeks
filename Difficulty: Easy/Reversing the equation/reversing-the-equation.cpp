#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseEqn(string s) {
        vector<string> tokens;
        string temp = "";

        // Step 1: Extract numbers and operators
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
                tokens.push_back(temp);
                tokens.push_back(string(1, s[i]));
                temp = "";
            } else {
                temp += s[i];
            }
        }
        tokens.push_back(temp); // Push the last number

        // Step 2: Rebuild the string in reverse order of tokens
        string ans = "";
        for (int i = tokens.size() - 1; i >= 0; i--) {
            ans += tokens[i];
        }

        return ans;
    }
};