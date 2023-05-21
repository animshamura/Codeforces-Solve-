#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==3) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i = 1; i <= n; i++){
                if(i%2==1) cout<<n/2-n%2<<" ";
                else cout<<(-1)*(n/2)<<" ";
            }
            cout<<endl;
        }
    }
        
        return 0;
}
