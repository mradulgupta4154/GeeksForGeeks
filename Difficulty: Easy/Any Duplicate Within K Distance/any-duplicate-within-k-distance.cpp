class Solution {
  public:
    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        unordered_set<int> st;

        for (int i = 0; i < arr.size(); i++) {
            // If the element is already present in the set, a duplicate exists within k distance
            if (st.count(arr[i])) {
                return true;
            }

            // Insert current element into the set
            st.insert(arr[i]);

            // Maintain the window size up to k
            if (i >= k) {
                st.erase(arr[i - k]);
            }
        }

        return false;
    }
};