class Solution {
public:
    int findSum(string &s) {
        int total_sum = 0;
        int current_num = 0;

        for (char c : s) {
            if (isdigit(c)) {
                // Build the current multi-digit number
                current_num = current_num * 10 + (c - '0');
            } else {
                // Non-digit character encountered; add the accumulated number to total sum
                total_sum += current_num;
                current_num = 0; // Reset for the next number
            }
        }

        // Add any remaining number at the end of the string
        total_sum += current_num;

        return total_sum;
    }
};