class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        vector<int> pos;
        vector<int> neg;
        for (int x : arr) {
            if (x >= 0) {
                pos.push_back(x);
            } else {
                neg.push_back(x);
            }
        }
        int i = 0;
        for (int x : pos) {
            arr[i++] = x;
        }
        for (int x : neg) {
            arr[i++] = x;
        }
    }
};