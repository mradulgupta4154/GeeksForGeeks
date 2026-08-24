class Solution {
  public:
    void segregateEvenOdd(vector<int> &arr) {
        vector<int> evens, odds;

        for (int x : arr) {
            if (x % 2 == 0) {
                evens.push_back(x);
            } else {
                odds.push_back(x);
            }
        }

        sort(evens.begin(), evens.end());
        sort(odds.begin(), odds.end());

        int idx = 0;
        for (int x : evens) arr[idx++] = x;
        for (int x : odds)  arr[idx++] = x;
    }
};