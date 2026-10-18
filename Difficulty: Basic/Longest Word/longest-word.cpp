class Solution {
  public:
    string longest(vector<string>& arr) {
        // code here
        string a="";
        int b=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i].length()>b){
                a=arr[i];
                b=arr[i].size();
            }
            
        }
        return a;
    }
};
