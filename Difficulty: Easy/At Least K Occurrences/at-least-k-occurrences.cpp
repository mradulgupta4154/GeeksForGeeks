class Solution {
public:
    int firstElementKTime(vector<int>& arr, int k) {
        unordered_map<int, int> m;
        for (int c : arr) {
            m[c]++;
            if (m[c] >= k) {
                return c;
            }
        }

        return -1;
    }
};