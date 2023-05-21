#include <bits/stdc++.h>
using namespace std;
int main() {
  string t;
   char ch1 [] = {'h','e','i','d','i'};
   cin>>t;
   int l = t.length();
   char ch [l];
   int i=0, j=0;
   strcpy(ch,t.c_str());
   while(i<l&&j<5){
     if(ch[i]==ch1[j]) j++;
     i++;
   }
   if(j==5) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
  return 0;
}
