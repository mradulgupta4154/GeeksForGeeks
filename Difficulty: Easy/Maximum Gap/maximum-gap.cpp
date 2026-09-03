class Solution {
  public:
    int maxDiff(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int c=0;
        for(int i=0;i<arr.size()-1;i++){
            int d=arr[i+1]-arr[i];
            c=max(c,d);
        }
        return c;
    }
};