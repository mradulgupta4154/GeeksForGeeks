class Solution {
  public:
    int maxPoint(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
        int maxi=0;
        for(int i=0;i<arr1.size();i++){
            int d=k/arr1[i]*arr2[i];
            maxi=max(d,maxi);
        }
        return maxi;
    }
};