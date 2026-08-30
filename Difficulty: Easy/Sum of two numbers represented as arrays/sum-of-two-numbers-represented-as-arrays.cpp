class Solution {
public:
    vector<int> addArrays(vector<int>& arr1, vector<int>& arr2) {
        vector<int> result;
        int i = arr1.size() - 1;
        int j = arr2.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += arr1[i--];
            if (j >= 0) sum += arr2[j--];
            result.push_back(sum % 10);
            carry = sum / 10;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};