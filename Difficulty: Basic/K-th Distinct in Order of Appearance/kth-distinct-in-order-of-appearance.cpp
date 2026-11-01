class Solution {
  public:
    int kthDistinct(vector<int>& arr, int k) {
        unordered_map<int,int> m;
        for (int c : arr) {
            m[c]++;
        }

        int cnt = 0;
        for (int c : arr) {
            if (m[c] == 1) {
                cnt++;
                if (cnt == k) return c;
            }
        }
        return -1;
    }
};