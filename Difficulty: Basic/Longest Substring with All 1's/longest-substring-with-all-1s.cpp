class Solution {
  public:
    int longestSubstring(string &s) {
        // code here
        int count=0,maxi=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                count++;
                maxi=max(count,maxi);
            }
            else{

                count=0;
            }
        }
        return maxi;
    }
};