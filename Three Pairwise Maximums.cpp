#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  int a[3];
 cin>>t;
 while(t--){
   cin>>a[0]>>a[1]>>a[2];
   sort(a,a+3);
   if(a[2]>a[1]) cout<<"NO\n";
   else cout<<"YES\n"<<a[0]<<" "<<a[0]<<" "<<a[1]<<endl;
 }
 return 0;
}
