class Solution {
  public:
    vector<int> getMoreAndLess(vector<int> &arr, int target) {
        // code here
        vector<int>vec;
        int a=0,b=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=target) a++;
            if(arr[i]>=target) b++;
        }
        vec.push_back(a);
        vec.push_back(b);
        return vec;
    }
};