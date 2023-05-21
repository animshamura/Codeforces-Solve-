#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    string str ="codeforces";
    char s;
    
    cin>>t;
    while(t--){
        cin>>s; 
        if(str.find(s)!=-1) cout<<"Yes\n";
        else  cout<<"No\n";
    }
 
    return 0;
}
