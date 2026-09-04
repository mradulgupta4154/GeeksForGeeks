class Solution {
public:
    int findKthMissing(vector<int>& a, vector<int>& b, int k) {
        unordered_set<int> st(b.begin(), b.end());
        int count = 0;

        for (int num : a) {
            if (st.find(num) == st.end()) {
                count++;
                if (count == k) {
                    return num;
                }
            }
        }

        return -1;
    }
};