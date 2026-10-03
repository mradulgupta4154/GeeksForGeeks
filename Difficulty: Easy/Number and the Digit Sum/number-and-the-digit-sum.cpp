class Solution {
public:
    // Helper function to calculate sum of digits
    long long getDigitSum(long long num) {
        long long sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    int numberCount(int n, int k) {
        long long low = 1, high = n;
        long long min_val = -1;

        // Binary Search for the first number where (i - sumOfDigits(i)) >= k
        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (mid - getDigitSum(mid) >= k) {
                min_val = mid;
                high = mid - 1; // Try finding a smaller valid number
            } else {
                low = mid + 1;  // Look in the right half
            }
        }

        // If no such number exists
        if (min_val == -1) return 0;

        // Count of numbers from min_val to n
        return n - min_val + 1;
    }
};