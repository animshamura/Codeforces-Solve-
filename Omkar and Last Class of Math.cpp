#include <bits/stdc++.h>
using namespace std;
int main() {
  long long t,n,k;
  cin>>t;
  while(t--){
    cin>>n;
    if(n%2==0) cout<<n/2<<" "<<n/2<<endl;
    else{
      k=n;
      for(long long i = 2; i*i <= n; i++){
       if(n%i==0){
         k=i; 
         break;
       }
      }
      cout<<n/k<<" "<<n-n/k<<endl;
    }
  }
  return 0;
}
