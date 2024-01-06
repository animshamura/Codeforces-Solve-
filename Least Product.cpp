#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n,ai,c1,c2; 
    cin>>t;
    while(t--){
        cin>>n;
        c1=0, c2=0;
        for(int i = 1; i <= n; i++){
            cin>>ai;
            if(ai==0) c1=1;
            if(ai<0)c2++;
        }
        if(c1||c2%2) cout<<0<<endl;
        else cout<<1<<endl<<1<<" "<<0<<endl;
    }
}
