#include <iostream>
#include <math.h>
using namespace std;
int main() {
  long long a, b, c;
  cin>>a>>b>>c;
  cout<<(long long)(ceil(a/(double)c)*ceil(b/(double)c))<<endl;
  return 0;
}
