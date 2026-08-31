class Solution {
  public:
    vector<int> scores(vector<int>& a, vector<int>& b) {
        // code here
        int c=0,d=0;
        for(int i=0;i<a.size();i++){
            if(a[i]<b[i]) d++;
            else if(a[i]>b[i]) c++;
        }
        return {c,d};
    }
};