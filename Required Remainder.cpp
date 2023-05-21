#include <iostream>
using namespace std;
int main() {
  int t,x,y,n,r,ans;
  cin>>t;
  while(t--){
     cin>>x>>y>>n;
     ans=x*(n/x)+y;
     if(ans>n) cout<<ans-x<<endl;
     else cout<<ans<<endl;
  }
  return 0;
}
