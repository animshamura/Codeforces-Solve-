#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t,n,s,r,k;
    cin>>t;
    while(t--){
        cin>>n>>s>>r;
        cout<<s-r<<" ";
        for(int i = n-1; i >= 1; i--) {
            cout<<r/i<<" ";
            r-=r/i;
        }
        cout<<endl;
        
            
        }
 
    return 0;
}
