#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    // code here
    if(a>b){
        cout<<((a>c)?a:c);
    }
    else{
        cout<<((b>c)?b:c);
    }

    return 0;
}
