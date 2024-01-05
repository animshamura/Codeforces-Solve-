#include<bits/stdc++.h> 
using namespace std; 
int main() {
    int t,n; 
    cin>>t;
    while(t--){
        cin>>n;
        if(n==1) cout<<4<<endl;
        else{
        cout << 196 << string(n-3,'0') << endl;
        for( int i = 0 ; i < n/2 ; i++ ){
            cout << 1 << string(i,'0') << 6 << string(i,'0') << 9 << string(n - 2*i - 3, '0') << endl;
            cout << 9 << string(i,'0') << 6 << string(i,'0') << 1 << string(n - 2*i - 3, '0') << endl;
        }
        }
    }
}
