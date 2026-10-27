class Solution {
  public:
    int extractMaximum(string &s) {
        // code here
       int maxi = -1;
       int curr = 0;
       for (int i = 0; i < s.length(); i++) {
           if (s[i] >= '0' && s[i] <= '9') {
               curr = curr * 10 + (s[i] - '0');
               maxi = max(maxi, curr);
           } else {
               curr = 0;
           }
       }
       return maxi;
    }
};