#include <iostream>
#include <string>
using namespace std;
int main() {
string s;
char x;
cin>>s;
for(int i = 0; i < s.size(); i++){
  x=s.at(i);
  if(i==0) putchar(toupper(x));
  else cout<<x;
}
cout<<endl;
return 0;
}
