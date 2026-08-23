class Solution {
  public:
    bool isPalindrome(vector<int> &arr) {
        // code here
        vector<int>d={arr.begin(),arr.end()};
        bool is =true;
        reverse(d.begin(),d.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=d[i]) is=false;
        }
        return is;
    }
};
