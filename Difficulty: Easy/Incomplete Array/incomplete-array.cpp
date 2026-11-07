class Solution {
public:
    int countElements(vector<int>& arr) {
        if (arr.empty()) return 0;

        int min_val = arr[0];
        int max_val = arr[0];
        unordered_set<int> unique_elements;

        for (int num : arr) {
            min_val = min(min_val, num);
            max_val = max(max_val, num);
            unique_elements.insert(num);
        }

        // Total numbers between min and max inclusive
        long long total_range = (long long)max_val - min_val + 1;

        // Missing elements = Total numbers in range - Unique elements present
        return total_range - unique_elements.size();
    }
};