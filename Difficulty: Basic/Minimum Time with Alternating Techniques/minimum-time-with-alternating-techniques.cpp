class Solution {
  public:
    int minTime(vector<int>& a, vector<int>& b) {
        // code here
        int a1=0,a2=0;
        for(int i=0;i<a.size();i++){
            if(i%2==0){
                a1+=a[i];
                a2+=b[i];
            }
            else{
                a1+=b[i];
                a2+=a[i];
            }
            
        }
        return min(a1,a2);
    }
};