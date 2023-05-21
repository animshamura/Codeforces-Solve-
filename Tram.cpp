#include <iostream>
using namespace std;
int main() {
int t,a,b,mx,cmx;
cin>>t;
cin>>a>>b;
mx=b, cmx=b, t--;
while(t--){
  cin>>a>>b;
  cmx=cmx-a+b;
  if(cmx>mx) mx=cmx;
}
cout<<mx<<endl;
return 0;
}
