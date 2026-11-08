class Solution {
  public:
    int factorial(int n) {
        // code here
        long long c=1;
        for(int i=1;i<=n;i++){
            c*=i;
        }
        return c;
    }
};