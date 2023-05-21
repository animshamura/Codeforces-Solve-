#include <bits/stdc++.h>
using namespace std;
int main(){
   int t,sz ;
   string s,a,b;
   cin>>t;
   while(t--){
       cin>>s;
       set<char> c;
       for(int i = 0; i < s.size()/2; i++) c.insert(s[i]);  
       if(c.size()==1) cout<<"No\n";
       else cout<<"Yes\n";
   }
    return 0;
}
