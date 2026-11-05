class Solution {
public:
    vector<int> kSmallest(vector<int>& arr, int k) {
        // Create a copy to find the k-th smallest element
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());

        int kth_val = temp[k - 1];

        // Count how many elements are strictly less than kth_val
        int strict_less = 0;
        for (int i = 0; i < k; ++i) {
            if (temp[i] < kth_val) {
                strict_less++;
            }
        }

        // We need 'strict_less' elements that are < kth_val 
        // and (k - strict_less) elements that equal kth_val.
        int needed_equal = k - strict_less;

        vector<int> result;
        for (int x : arr) {
            if (x < kth_val) {
                result.push_back(x);
            } else if (x == kth_val && needed_equal > 0) {
                result.push_back(x);
                needed_equal--;
            }

            if (result.size() == k) {
                break;
            }
        }

        return result;
    }
};