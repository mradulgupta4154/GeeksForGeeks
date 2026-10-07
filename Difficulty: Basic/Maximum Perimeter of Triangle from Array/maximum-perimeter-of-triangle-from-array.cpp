class Solution {
  public:
    int maxPerimeter(vector<int> &arr) {
        sort(arr.begin(), arr.end(), greater<int>()); 

        for (int i = 0; i + 2 < (int)arr.size(); i++) {
            int a = arr[i], b = arr[i + 1], c = arr[i + 2];
            if (b + c > a)        
                return a + b + c;
        }
        return -1;               
    }
};