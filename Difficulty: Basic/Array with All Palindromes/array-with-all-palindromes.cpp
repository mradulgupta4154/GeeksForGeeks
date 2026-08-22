class Solution {
  public:
    bool isp(int a){
        string c=to_string(a);
        string d=c;
        reverse(d.begin(),d.end());
        if(c==d) return true;
        return false;
    }
    bool isPalinArray(vector<int> &arr) {
        bool istrue=true;
        // code here
        for(int i=0;i<arr.size();i++){
            if(!isp(arr[i])) istrue=false;
        }
        return istrue;
        
    }
};