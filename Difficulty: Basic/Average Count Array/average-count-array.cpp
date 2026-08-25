class Solution {
  public:
      vector<int> countArray(vector<int>& arr, int x) {
          unordered_map<int, int> freq;
          for (int num : arr) {
              freq[num]++;
          }

          vector<int> result(arr.size());
          for (size_t i = 0; i < arr.size(); i++) {
              int avg = (arr[i] + x) / 2;
              result[i] = freq[avg];
          }

          return result;
      }
  };