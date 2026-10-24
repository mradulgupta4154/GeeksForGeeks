class Solution {
  public:
    string removeDuplicates(string &s) {
        unordered_set<char> st;
        string r = "";
        for (int i = 0; i < s.size(); i++) {
            if (st.find(s[i]) == st.end()) {   // not seen before
                st.insert(s[i]);
                r += s[i];
            }
        }
        return r;
    }
};