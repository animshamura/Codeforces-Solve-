#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
int t,count=0;
string s;
cin>>t>>s;
char ch[t];
strcpy(ch,s.c_str());
for(int i = 1; i < t; i++){
  if(ch[i]==ch[i-1]) count++;
}
cout<<count<<endl;
return 0;
}
