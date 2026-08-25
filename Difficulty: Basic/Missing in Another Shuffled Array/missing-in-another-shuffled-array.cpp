class Solution {
  public:
    int findMissing(vector<int>& arr1, vector<int>& arr2) {
        // code here
        int a=0,b=0;
        for(int i=0;i<arr1.size();i++){
            a+=arr1[i];
        }
        for(int i=0;i<arr2.size();i++){
            b+=arr2[i];
        }
        return a-b;
    }
};