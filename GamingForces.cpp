#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
   int t,n,c;
   cin>>t;
   while(t--){
       cin>>n;
       int arr [n];
       c=0;
       for(int i = 0; i < n; i++) cin>>arr[i];
       for(int i = 0; i < n; i++) if(arr[i]==1) c++;
       cout<<(c/2+c%2)+n-c<<endl;
   }
 
    return 0;
}
