class Solution {
  public:
    int minProductSum(vector<int> &a, vector<int> &b) {
        // code here
        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());
        int sum=0;
        for(int i=0;i<a.size();i++){
            sum+=a[i]*b[i];
        }
        return sum;
    }
};