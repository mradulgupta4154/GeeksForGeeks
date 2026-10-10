class Solution {
  public:
    string minSum(vector<int> &arr) {
        sort(arr.begin(), arr.end());

        string a = "", b = "";
        for (int i = 0; i < arr.size(); i++) {
            if (i % 2 == 0) a += to_string(arr[i]);
            else            b += to_string(arr[i]);
        }

        // add two big numbers stored as strings
        string res = "";
        int i = a.size() - 1, j = b.size() - 1, carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';
            res += (sum % 10) + '0';
            carry = sum / 10;
        }

        // remove leading zeros (they are at the end because res is reversed)
        while (res.size() > 1 && res.back() == '0') res.pop_back();

        reverse(res.begin(), res.end());
        return res;
    }
};