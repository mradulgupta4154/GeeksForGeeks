class Solution {
  public:
    int kthItem(vector<int>& a, vector<int>& b, int k) {
        // code here
        set<int>s;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                s.insert(a[i]+b[j]);
            }
        }
        vector<int>vec(s.begin(),s.end());
        if(vec.size()<k) return -1;
        return vec[k-1];
    }
};