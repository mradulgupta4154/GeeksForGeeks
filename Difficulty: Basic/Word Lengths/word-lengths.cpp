class Solution {
  public:
    vector<int> wordLengths(string &s) {
        vector<int> vec;
        int c = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                vec.push_back(c);   // word ended
                c = 0;
            } else {
                c++;                // still inside a word
            }
        }
        vec.push_back(c);           // last word has no space after it
        return vec;
    }
};