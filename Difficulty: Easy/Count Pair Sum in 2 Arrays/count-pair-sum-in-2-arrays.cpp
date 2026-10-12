class Solution {
  public:
    int countPairs(vector<int>& a, vector<int>& b, int x) {
        unordered_set<int> st(b.begin(), b.end());

        int count = 0;
        for (int i = 0; i < a.size(); i++) {
            if (st.count(x - a[i])) {
                count++;
            }
        }

        return count;
    }
};