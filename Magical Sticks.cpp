#include <iostream>
#include <math.h>
using namespace std;
int main() {
  long long n,t;
  cin>>n;
  while(n--){
    cin>>t;
    cout<<(long long)ceil(t/2.0)<<endl;
  }
 return 0;
}
