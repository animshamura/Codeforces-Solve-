#include <iostream>
using namespace std;
int main() {
  long long t,n,r;
  cin>>t;
  while(t--){
    cin>>n>>r;
    if(n<=r) cout<<(n*(n-1))/2+1<<endl;
    else cout<<(r*(r+1))/2<<endl;
  }
  return 0;
}
