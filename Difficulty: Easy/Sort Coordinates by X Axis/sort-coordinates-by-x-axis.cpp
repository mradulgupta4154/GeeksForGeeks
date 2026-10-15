class Solution {
public:
    void coordinatesSort(vector<Point>& arr) {
        sort(arr.begin(), arr.end(), [](const Point& a, const Point& b) {
            if (a.x != b.x) {
                return a.x < b.x;
            }
            return a.y < b.y;
        });
    }
};