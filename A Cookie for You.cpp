#include <iostream>
#include <math.h>
using namespace std;
int main() {
  long long t,a,b,c,d;
  cin>>t;
  while(t--){
    cin>>a>>b>>c>>d;
    if(a+b>=c+d && min(a,b)>=d) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
 return 0;
}
