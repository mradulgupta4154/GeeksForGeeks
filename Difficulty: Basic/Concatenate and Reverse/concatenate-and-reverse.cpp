class Solution {
  public:
    string conRevstr(string &s1, string &s2) {
        // code here
        s1.insert(s1.end(),s2.begin(),s2.end());
        reverse(s1.begin(),s1.end());
        return s1;
    }
};