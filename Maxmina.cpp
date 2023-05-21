#include <iostream> 
using namespace std; 
int main () {
 int t, a, b;
 cin>>t;
 while(t--){
 cin>>a>>b;
 int ar [a];
 int found=0;
 for(int i = 0; i < a; i++){
cin>>ar[i];
if(ar[i]==1) found=1;
 }
 if(found) cout<<"YES\n";
 else cout<<"NO\n";
 }
}
