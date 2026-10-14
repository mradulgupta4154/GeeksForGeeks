class Solution {
public:
    void sortExceptK(vector<int>& arr, int k) {
        int fixedElement = arr[k];

        // Remove the element at index k
        arr.erase(arr.begin() + k);

        // Sort the rest of the array
        sort(arr.begin(), arr.end());

        // Insert the original element back at index k
        arr.insert(arr.begin() + k, fixedElement);
    }
};