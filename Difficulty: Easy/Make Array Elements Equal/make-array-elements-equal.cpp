class Solution {
  public:
    long long int minOperations(int N) {
        long long n = N;
        return (n / 2) * ((n + 1) / 2);
    }
};