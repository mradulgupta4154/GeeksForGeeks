class Solution {
  public:
    vector<int> findIndex(vector<int>& arr, int key) {
        // code here
        int a=-1;int b=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==key){
                a=i;
                break;
            }
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]==key){
                b=i;
            }
        }
        return{a,b};
    }
};