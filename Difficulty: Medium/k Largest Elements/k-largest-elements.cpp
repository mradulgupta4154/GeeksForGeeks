class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // code here
        vector<int>vec;
        sort(arr.rbegin(),arr.rend());
        int i=0;
        while(k--){
            vec.push_back(arr[i]);
            i++;
        }
        return vec;
    }
};