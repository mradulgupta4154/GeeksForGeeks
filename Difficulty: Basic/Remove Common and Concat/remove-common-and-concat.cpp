class Solution {
  public:
    string concatenatedString(string &s1, string &s2) {
        //  code here
        string a="";
        for(int i=0;i<s1.length();i++){
            if(find(s2.begin(),s2.end(),s1[i])!=s2.end()){
                continue;
            }
            else{
                a+=s1[i];
            }
        }
        for(int i=0;i<s2.length();i++){
            if(find(s1.begin(),s1.end(),s2[i])!=s1.end()){
                continue;
            }
            else{
                a+=s2[i];
            }
        }
        return (a.length()==0)?"-1":a;
    }
};