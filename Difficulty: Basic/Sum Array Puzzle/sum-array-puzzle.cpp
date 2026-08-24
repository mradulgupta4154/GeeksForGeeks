class Solution {
  public:
    void sumArray(vector<int> &arr) {
        // code here
        int ans=0;
        for(int i=0;i<arr.size();i++){
            ans+=arr[i];
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=ans-arr[i];
        }
    }
};