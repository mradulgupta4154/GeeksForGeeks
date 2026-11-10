class Solution {
public:
    bool isDigitSumPalindrome(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10; 
            n /= 10;       
        }
        string ans = to_string(sum);
        string f = ans;
        reverse(f.begin(), f.end());
        return f == ans;
    }
};