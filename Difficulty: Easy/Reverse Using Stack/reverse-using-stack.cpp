class Solution {
  public:
    string reverse(const string& S) {
        // code here
        stack<char>c;
        for(int i=0;i<S.length();i++){
            c.push(S[i]);
        }
        string a="";
        while(!c.empty()){
            a+=c.top();
            c.pop();
        }
        return a;
        
    }
};