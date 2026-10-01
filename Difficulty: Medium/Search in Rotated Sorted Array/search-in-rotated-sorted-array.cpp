class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // Code Here
        int a=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==key) a=i;
        }
        return a;
    }
};