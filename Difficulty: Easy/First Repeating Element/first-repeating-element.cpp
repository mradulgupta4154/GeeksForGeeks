class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        // code here
        unordered_map<int,int>m;
        for(int c:arr){
            m[c]++;
        }
        int a=-1;
        for(int i=0;i<arr.size();i++){
            if(m[arr[i]]>1){
                a=i+1;
                break;
            }
        }
        return a;
    }
};