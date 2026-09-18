class Solution {
  public:
    string remConsonants(string &s) {
        // code here
        vector<char>vec{'a','e','i','o','u','A','E','I','O','U'};
        string ans="";
        for(int i=0;i<s.length();i++){
            if(find(vec.begin(),vec.end(),s[i])!=vec.end()) ans+=s[i];
        }
        return ans;
    }
};