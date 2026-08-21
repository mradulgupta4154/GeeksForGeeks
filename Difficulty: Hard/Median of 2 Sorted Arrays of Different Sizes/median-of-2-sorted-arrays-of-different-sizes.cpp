class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        // code here
        a.insert(a.end(),b.begin(),b.end());
        sort(a.begin(),a.end());
        if(a.size()%2!=0){
            return a[a.size()/2];
        }
        else{
            return (a[a.size()/2]+a[(a.size()-1)/2])/2.0;
        }
    }
};