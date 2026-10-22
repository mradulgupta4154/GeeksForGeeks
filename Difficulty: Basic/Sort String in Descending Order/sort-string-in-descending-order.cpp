class Solution {
  public:    
    string reverseSort(string &s) {
        // code here
        sort(s.rbegin(),s.rend());
        return s;
    }
};