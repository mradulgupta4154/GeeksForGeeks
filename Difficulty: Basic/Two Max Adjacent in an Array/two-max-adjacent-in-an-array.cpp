class Solution {
  public:
    int maxAdjSum(vector<int> &arr) {
        // code here
            int m=INT_MIN;
            for(int i=0;i<arr.size()-1;i++){
                int d=arr[i]+arr[i+1];
                m=max(m,d);
            }
            return m;
    }
};