class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        // code here
        unordered_map<int,int>m;
        for(int c:arr){
            m[c]++;
        }
        int a=0;
        for(int num:arr){
            if(m[num]==1) {
                a=num;
                break;
            }
        }
        return a;
    }
};
