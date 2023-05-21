#include <bits/stdc++.h>
using namespace std;
int main() {
  int t,s;
    cin>>t;
    string inp;
    while(t--) {
      cin>>s;
      cin>>inp;
      char b [s];
      string ans = "";
      string ant = "";
      strcpy(b,inp.c_str());
      bool flag = false;
        for(int i = 0; i < s; i++) {
          if(b[i]=='1') break;
          ans+=b[i];
        }
        for(int i = 0; i < s-1; i++) {
          if(b[i]=='1' && b[i+1]=='0') {
             flag = true; 
             break;
          }
        }
        for(int i = s-1; i>=0; i--) {
          if(b[i]=='0') break;
          ant+=b[i];
        }
        if(flag) cout<<ans<<"0"<<ant<<endl;
        else cout<<ans<<ant<<endl;
    }
    return 0;
  }
