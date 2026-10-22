class Solution {
  public:
    bool isProductEven(vector<int> &arr) {
        // code here
        bool is=false;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==0){
                is=true;
                break;
            }
        }
        return is;
    }
};