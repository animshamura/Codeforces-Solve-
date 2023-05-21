#include <bits/stdc++.h>
using namespace std;
int main(){
 
    int t,n;
    cin>>t;
    while(t--){
         cin>>n;
         int ar [n];
         for(int i = 0; i < n; i++) cin>>ar[i];
         if(ar[0]==ar[n-1]) cout<<"NO"<<endl;
         else{
             cout<<"YES"<<endl;
             for(int i = 0; i < n; i++) cout<<((i==0)?ar[0]:ar[n-i])<<" ";
             cout<<endl;
         }
        }
    return 0;
}
