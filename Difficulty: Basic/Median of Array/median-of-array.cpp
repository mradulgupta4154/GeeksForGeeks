class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        sort(arr.begin(),arr.end());
        if(arr.size()%2==0){
            return (double)(arr[arr.size()/2]+arr[(arr.size()-1)/2])/2;
        }
        else{
            return arr[arr.size()/2];
        }
    }
};