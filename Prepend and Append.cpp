#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t,n,c;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>s; 
        c=0;
        for(int i = 0 ; i <= n/2; i++){
            if(s[i]!=s[n-i-1]) c++;
            else break;
        }
        if(n-c*2<0) cout<<0<<endl;
        else cout<<n-c*2<<endl;
    }
 
    return 0;
}
