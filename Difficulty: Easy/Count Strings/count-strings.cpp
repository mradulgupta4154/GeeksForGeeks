class Solution {
public:
    long long countStr(int n) {
        long long totalCount = 0;

        // b can be 0 or 1
        for (int b = 0; b <= 1; ++b) {
            // c can be 0, 1, or 2
            for (int c = 0; c <= 2; ++c) {
                long long a = n - b - c;
                if (a >= 0) {
                    // Calculate n! / (a! * b! * c!)
                    long long ways = 1;

                    // Multiply numerator terms for (a! * b! * c!) cancellation
                    // n! / a! = (a + 1) * (a + 2) * ... * n
                    long long numeratorProd = 1;
                    for (int i = a + 1; i <= n; ++i) {
                        numeratorProd *= i;
                    }

                    long long denominatorProd = 1;
                    for (int i = 1; i <= b; ++i) denominatorProd *= i;
                    for (int i = 1; i <= c; ++i) denominatorProd *= i;

                    totalCount += (numeratorProd / denominatorProd);
                }
            }
        }

        return totalCount;
    }
};