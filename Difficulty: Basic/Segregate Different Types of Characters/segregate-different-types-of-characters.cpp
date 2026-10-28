class Solution {
  public:
    vector<string> splitString(string s) {
        // code here
        string a="",b="",c="";
        for(int i=0;i<s.length();i++){
            if((s[i]>='A' and s[i]<='Z') or (s[i]>='a' and s[i]<='z')){
                a+=s[i];
            }
            else if(s[i]>='0' and s[i]<='9'){
                b+=s[i];
            }
            else{
                c+=s[i];
            }
        }
        if(a.empty()){
            a="-1";
        }
        if(b.empty()){
            b="-1";
        }
        if(c.empty()) c="-1";
        return {a,b,c};
    }
};
