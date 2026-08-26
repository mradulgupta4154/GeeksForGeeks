class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        vector<int>vec,zero;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0) {
                zero.push_back(arr[i]);
                arr.erase(arr.begin()+i);
                i--;
            }
        }
        arr.insert(arr.end(),zero.begin(),zero.end());
        
    }
};