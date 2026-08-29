class Solution {
  public:
    int maxTripletProduct(vector<int>& arr) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        
        
        return max(arr[0]*arr[1]*arr[n-1] , arr[n-1]*arr[n-2]*arr[n-3]);
    }
};