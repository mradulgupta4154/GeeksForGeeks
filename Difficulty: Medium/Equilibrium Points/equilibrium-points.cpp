class Solution {
  public:
    double calculateForce(double x, vector<int> &arr) {
        double f = 0;
        for (int p : arr) f += 1.0 / (x - p);
        return f;
    }

    vector<double> nullPoints(vector<int> &arr) {
        vector<double> result;
        int n = arr.size();

        for (int i = 0; i + 1 < n; i++) {
            double low = arr[i], high = arr[i + 1], mid = 0;

            for (int iter = 0; iter < 100; iter++) {
                mid = (low + high) / 2;
                double force = calculateForce(mid, arr);

                if (force > 0) low = mid;
                else high = mid;
            }

            result.push_back(round(mid * 100.0) / 100.0);
        }
        return result;
    }
};