class Solution {
  public:
    bool searchEle(vector<int>& arr, int x) {
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == x) {
                return true;
            }
        }
        return false;
    }

    void insertEle(vector<int>& arr, int y, int yi) {
        if (yi >= 0 && yi <= arr.size()) {
            arr.insert(arr.begin() + yi, y);
        }
    }

    void deleteEle(vector<int>& arr, int z) {
        for (auto it = arr.begin(); it != arr.end(); ++it) {
            if (*it == z) {
                arr.erase(it);
                break; // Remove only the first occurrence
            }
        }
    }
};