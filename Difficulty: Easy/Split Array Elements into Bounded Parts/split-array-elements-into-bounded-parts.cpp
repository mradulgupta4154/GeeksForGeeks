class Solution {
  public:
    int div(int a,int k){
        int count=0;
        while(a>0){
            a-=k;
            count++;
        }
        return count;
    }
    int totalCount(int k, vector<int>& arr) {
        // code here
        int count=0;
        for(int i=0;i<arr.size();i++){
            count+=div(arr[i],k);
        }
        return count;
    }
};