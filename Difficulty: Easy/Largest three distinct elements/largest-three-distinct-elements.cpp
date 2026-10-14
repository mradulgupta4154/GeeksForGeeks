class Solution {
public:
    vector<int> getThreeLargest(vector<int>& arr) {
        // Use a set to store unique elements in ascending order
        set<int> s(arr.begin(), arr.end());

        vector<int> vec(s.begin(), s.end());
        vector<int> v;

        // Traverse backwards from the end of the set to get elements in descending order
        int n = vec.size();
        for (int i = n - 1; i >= 0 && v.size() < 3; --i) {
            v.push_back(vec[i]);
        }

        return v;
    }
};
