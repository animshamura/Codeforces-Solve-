#include<bits/stdc++.h>

using namespace std; 
int main()  {
    int t,n,k,sum,mx,res; 
     
    cin>>t;
    while(t--){
       cin>>n>>k;
       int a[n], b[n];
       sum=0, mx=0, res=0;
       for(int i = 0; i < n; i++) cin>>a[i];
       for(int i = 0; i < n; i++) cin>>b[i];
       for(int i = 0; i < min(n,k); i++){
           sum+=a[i];
           mx= max(mx,b[i]);
           res = max(res, sum+ mx*(k-i-1));
       }
       cout<<res<<endl;
    }
}
