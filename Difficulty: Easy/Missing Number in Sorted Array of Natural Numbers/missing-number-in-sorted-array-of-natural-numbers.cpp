class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        // Code here
        int n=arr.size()+1;
        int sum=0;
        int nsum=n*(n+1)/2;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        return nsum-sum;
    }
};