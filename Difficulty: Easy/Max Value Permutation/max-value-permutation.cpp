class Solution {
  public:
    int maxValue(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        int a=0;
        for(int i=0;i<arr.size();i++){
            a+=arr[i]*i;
        }
        return a;
    }
};