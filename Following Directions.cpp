#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t,n,x,y;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>s; 
        x=0,y=0;
        for(int i = 0; i < n; i++){
            if(s[i]=='L') x--;
            else if(s[i]=='R') x++;
            else if(s[i]=='U') y++;
            else y--;
            if(x==1 && y==1) break;
        }
        if(x==1 && y==1) cout<<"Yes\n";
        else cout<<"No\n";
    }
 
    return 0;
}
