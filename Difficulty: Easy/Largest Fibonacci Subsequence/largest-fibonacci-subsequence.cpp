class Solution {
public:
    vector<int> findFibSubset(vector<int>& arr) {
        // Find the maximum value in the array to know up to what limit to generate Fibonacci numbers
        int max_val = 0;
        for (int num : arr) {
            max_val = max(max_val, num);
        }

        // Generate Fibonacci numbers up to max_val
        unordered_set<int> fib_set;
        int a = 0, b = 1;
        fib_set.insert(0);
        if (max_val >= 1) {
            fib_set.insert(1);
        }

        while (b <= max_val) {
            int next = a + b;
            a = b;
            b = next;
            if (b <= max_val) {
                fib_set.insert(b);
            } else {
                // To handle cases where next Fibonacci number exceeds max_val but we want to be safe
                fib_set.insert(b);
                break;
            }
        }

        // Collect all elements from arr that are present in fib_set
        vector<int> result;
        for (int num : arr) {
            if (fib_set.find(num) != fib_set.end()) {
                result.push_back(num);
            }
        }

        return result;
    }
};