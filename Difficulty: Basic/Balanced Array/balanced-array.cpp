class Solution {
  public:
    int minValueToBalance(vector<int> &arr) {
        // code here
        int left=0,right=0;
        for(int i=0;i<arr.size()/2;i++){
            left+=arr[i];
        }
        for(int i=arr.size()/2;i<arr.size();i++){
            right+=arr[i];
        }
        return abs(left-right);
    }
};
