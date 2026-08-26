class Solution {
public:
    vector<int> getTriangle(vector<int>& arr) {
        vector<vector<int>> triangle;
        triangle.push_back(arr);

        // Generate rows from bottom to top
        while (triangle.back().size() > 1) {
            const auto& prev = triangle.back();
            vector<int> current;
            for (size_t i = 0; i < prev.size() - 1; ++i) {
                current.push_back(prev[i] + prev[i + 1]);
            }
            triangle.push_back(current);
        }

        // Traverse top-to-bottom and left-to-right
        vector<int> result;
        for (int i = triangle.size() - 1; i >= 0; --i) {
            for (int val : triangle[i]) {
                result.push_back(val);
            }
        }

        return result;
    }
};