#include <bits/stdc++.h>
#include <string>
#include <math.h>
using namespace std;
 
string getOut(int n){
  if(n==1) return "FastestFinger";
  else if(n==2||n%2==1) return "Ashishgup";
  else {
  for(int i=3;i<=sqrt(n);i++){
    if(n%i==0 && (i%2==1||(n/i)%2==1)) return "Ashishgup";
    }
  }
  return "FastestFinger"; 
}
 
int main() {
  int t,n;
   cin>>t;
   while(t--){
    cin>>n;
    cout<<getOut(n)<<endl;
   }
  return 0;
}
