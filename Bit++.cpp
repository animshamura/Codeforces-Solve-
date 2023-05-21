#include <iostream>
#include <string>
using namespace std;
int main() {
  int t,c=0;
  string s;
  cin>>t;
  while(t--){
    cin>>s;
    if(s.at(0)=='+'||s.at(2)=='+') c++;
    else c--;
  }
  cout<<c<<endl;
  return 0;
}
