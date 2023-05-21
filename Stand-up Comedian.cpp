#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   int t,a,b,c,d;
   cin>>t;
   while(t--){
       cin>>a>>b>>c>>d;
       if(a==0) cout<<1<<endl;
       else cout<<a+min(c,b)*2+min(a+1,abs(b-c)+d)<<endl;
   }
    return 0;
}
