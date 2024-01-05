#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t, n, k, tot;
    cin>>t;
    
    while(t--){
        cin>>n>>k;
        tot = 1; 
        for(ll i = 1; i <= n; i++) {ll a; cin>>a; tot*=a;}
        if(tot==0)cout<<"N0"<<endl;
        else {
        if(2023%tot!=0) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            for(ll i = 1; i <= k; i++){
                if(i==1) cout<<2023/tot<<" ";
                else cout<<1<<" ";
            }
            cout<<endl;
        }
        }
    }
}
