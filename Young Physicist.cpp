#include <iostream>
using namespace std;
int main() {
int t,x,y,z,sumx=0,sumy=0,sumz=0;
cin>>t;
 while(t--){
   cin>>x>>y>>z;
   sumx+=x, sumy+=y, sumz+=z;
 }
if(sumx==0&&sumy==0&&sumz==0) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}
