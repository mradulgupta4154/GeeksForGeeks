class Solution {
  public:
    int toyCount(vector<int>& arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        long long a=0,c=0;
        for(int i=0;i<arr.size();i++){
            if(a+arr[i]<=k){
                a+=arr[i];
                c++;
            }
            else{
                break;
            }
        }
        return c;
    }
};