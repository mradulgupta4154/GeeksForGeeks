class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n=a.size();
        vector<int>s;
        a.insert(a.end(),b.begin(),b.end());
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            s.push_back(a[i]);
        }
        b.clear();
        for(int i=n;i<a.size();i++){
            b.push_back(a[i]);
        }
        a.clear();
        for(int i=0;i<s.size();i++){
            a.push_back(s[i]);
        }
    }
};