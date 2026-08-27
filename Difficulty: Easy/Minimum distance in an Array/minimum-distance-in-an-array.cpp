class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {
        int last_x = -1;
        int last_y = -1;
        int min_dist = INT_MAX;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == x) {
                last_x = i;
            } 
            if (arr[i] == y) {
                last_y = i;
            }

            if (last_x != -1 && last_y != -1) {
                min_dist = min(min_dist, abs(last_x - last_y));
            }
        }

        return (min_dist == INT_MAX) ? -1 : min_dist;
    }
};