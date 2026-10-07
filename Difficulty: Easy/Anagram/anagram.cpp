class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        bool is =true;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                is=false;
                break;
            }
        }
        return is and s1.length()==s2.length();
    }
};