#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
   ll t,n,s;
   cin>>t;
  
   while(t--){
    cin>>n>>s;
    if((n+s)%2) cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;
   }
}
