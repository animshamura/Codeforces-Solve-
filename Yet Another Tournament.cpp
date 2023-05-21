#include <bits/stdc++.h>
using namespace std;
int main(){
 
    int t,m,n,pos,sum;
    cin>>t;
    while(t--){
         cin>>n>>m;
         int ar1[n];
         int ar2 [n];
         pos=0;
         for(int i = 0; i < n; i++) cin>>ar1[i], ar2[i]=ar1[i];
         sort(ar1,ar1+n);
         for(int i = 0; i < n; i++){
             if(m>=ar1[i]) {pos++, m-=ar1[i];}
         }
 
         if(pos!= 0 && pos != n && m+ar1[pos-1]>=ar2[pos]) pos++;
         cout<<n+1-pos<<endl;
        }
    return 0;
}
