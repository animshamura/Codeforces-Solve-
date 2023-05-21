#include<iostream>
#include<string>
using namespace std;
int main(){
  string t;
  cin>>t;
  cout<<t;
  for(int i=t.length()-1;i>=0;i--) cout<<t[i];
  cout<<"\n";
  return 0;
}
