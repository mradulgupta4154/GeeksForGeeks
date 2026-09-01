class Solution {
  public:
    long long int noOfSubarrays(vector<int>& arr) {
        long long totalSubarrays = 0;
        long long currentZeroCount = 0;

        for (int num : arr) {
            if (num == 0) {
                currentZeroCount++;
                totalSubarrays += currentZeroCount; // Adds 1, 2, 3... k dynamically
            } else {
                currentZeroCount = 0; // Reset count when a 1 is encountered
            }
        }

        return totalSubarrays;
    }
};