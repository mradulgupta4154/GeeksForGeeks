class Solution {
  public:
    void replaceElements(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>vec(arr.size());
        vec[0]=arr[0]^arr[1];
        vec[n-1]=arr[n-2]^arr[n-1];
        for(int i=1;i<n-1;i++){
            vec[i]=arr[i-1]^arr[i+1];
        }
        arr.clear();
        arr.insert(arr.end(),vec.begin(),vec.end());
        
        
    }
};