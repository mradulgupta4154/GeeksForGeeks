class Solution {
  public:
    long long int product(vector<int> &arr) {
        // code here
        int mod=1000000007;
        long long m=1;
        for(int i=0;i<arr.size();i++){
            m=(m*arr[i])%mod;
        }
        return m%mod;
    }
};