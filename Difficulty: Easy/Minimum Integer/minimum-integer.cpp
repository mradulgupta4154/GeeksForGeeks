class Solution {
  public:
    int minimumInteger(vector<int>& arr) {
        // code here
        long long sum=0,n=arr.size();
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(arr[i]*n>=sum){
                return arr[i];
                break;
            }
        }
        return -1;
    }
};
