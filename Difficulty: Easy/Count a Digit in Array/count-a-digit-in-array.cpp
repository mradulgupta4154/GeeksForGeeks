class Solution {
  public:
    int digit(int a,int k){
        int count=0;
        while(a>0){
            int d=a%10;
            if(d==k) count++;
            a/=10;
        }
        return count;
    }
    int countDigitK(int k, vector<int>& arr) {
        int count=0;
        for(int i=0;i<arr.size();i++){
            count+=digit(arr[i],k);
        }
        // Code here
        return count;
        
    }
};