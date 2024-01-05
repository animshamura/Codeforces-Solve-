#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t, a, b, res;
    cin>>t;
    while(t--){
        cin>>a>>b;
        res = lcm(a,b);
        if(b%a==0) res*=b/a;
        cout<<res<<endl;
        }
    }
