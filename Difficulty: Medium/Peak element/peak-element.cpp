class Solution {
  public:
    int peakElement(vector<int> &arr) {
        for(int i = 1; i < arr.size() - 1; i++) {
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
                return i;
            }
        }

        // Check first and last element
        if(arr[0] > arr[1])
            return 0;

        return arr.size() - 1;
    }
};