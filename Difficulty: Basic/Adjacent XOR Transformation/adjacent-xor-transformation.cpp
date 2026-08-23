class Solution {
  public:
    vector<int> xorArray(vector<int>& arr) {
        // code here
        for(int i=0;i<arr.size()-1;i++){
            arr[i]=arr[i]^arr[i+1];
        }
        return arr;
    }
};