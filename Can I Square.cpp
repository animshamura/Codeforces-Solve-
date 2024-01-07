#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll t,n,x,s;
int main(){
cin>>t;
while(t--){
cin>>n;
for(int i=1;i<=n;i++) cin>>x,s+=x;
ll b=sqrt(s);
if(pow(b,2)==s) cout<<"Yes"<<'\n';
else cout<<"No"<<'\n';
s=0;
}
}
