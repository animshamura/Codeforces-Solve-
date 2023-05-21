#include <bits/stdc++.h>
#include <math.h>
using namespace std;
bool prime(long long n){
  if(n==1) return false;
  if(n==2) return true;
  if(n%2==0) return false;
  for(long long i = 3; i <= sqrt(n); i+=2){
    if(n%i==0) return false;
  }
  return true;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  long long t,n;
  cin>>t;
  while(t--){
    cin>>n;
    if((long long)sqrt(n)==sqrt(n)&&prime((long long)sqrt(n)))
      cout<<"YES"<<endl;  
    else cout<<"NO"<<endl;  
  }
}
