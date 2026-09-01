class Solution {
  public:
    int countSpecials(int k, vector<int> &arr) {
        // code here
        int d=0;
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        int c=arr.size()/k;
        for(auto&[num,count]:m){
            if(count==c){
                d++;
            }
        }
        return d;
    }
};