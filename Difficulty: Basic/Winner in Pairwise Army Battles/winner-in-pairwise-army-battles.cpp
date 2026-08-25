class Solution {
  public:
    string countryAtWar(vector<int>& arr1, vector<int>& arr2) {
        // code here
        int a=0,b=0;
        for(int i=0;i<arr1.size();i++){
            if(arr1[i]<arr2[i]) b++;
            else if(arr1[i]>arr2[i]) a++;
        }
        if(a>b) return "A";
        else if(a<b) return "B";
        else return "DRAW";
    }
};