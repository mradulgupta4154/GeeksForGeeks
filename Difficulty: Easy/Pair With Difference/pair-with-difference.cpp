class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        unordered_set<int> s;
        for (int v : arr) {
            if (s.count(v + x)) return true;
            if (x != 0 && s.count(v - x)) return true; // skip when x==0 to avoid matching itself
            s.insert(v);
        }
        return false;
    }
};