#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isBalanced(string& s) {
        stack<char> st;
        for (char c : s) {
            // If opening bracket, push to stack
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            else {
                // If closing bracket, stack must not be empty
                if (st.empty()) return false;

                char top = st.top();
                // Check for matching pair
                if ((c == ')' && top == '(') || 
                    (c == '}' && top == '{') || 
                    (c == ']' && top == '[')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        // If stack is empty, all brackets matched
        return st.empty();
    }
};