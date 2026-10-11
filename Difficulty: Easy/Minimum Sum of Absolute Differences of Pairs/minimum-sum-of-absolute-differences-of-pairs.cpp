class Solution {
  public:
    int findMinSum(vector<int>& a, vector<int>& b) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        long long sum = 0;
        for (int i = 0; i < a.size(); i++) {
            sum += abs(a[i] - b[i]);
        }

        return sum;
    }
};