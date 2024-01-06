#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
   ll t,n;
   string s;
   cin>>t;
  
   while(t--){
    cin>>n>>s;
    int ans = 0;
    for(char x : s) {
        if(x=='+') ans+=1;
        else ans-=1;
    }
    cout<<abs(ans)<<endl;
   }
}
