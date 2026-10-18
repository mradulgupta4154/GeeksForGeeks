class Solution {
  public:
    string removeVowels(string& s) {
        // code here
        string a="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
                continue;
            }
            a+=s[i];
        }
        return a;
    }
};