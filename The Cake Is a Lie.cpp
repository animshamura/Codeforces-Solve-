#include <iostream>
using namespace std;
int main () {
    int t,n,m,k;
    cin >> t;
    while(t--) {
        cin>>n>>m>>k;
        if(k==n*m-1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
