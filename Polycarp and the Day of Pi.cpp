#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t,c;
    string n, p = "314159265358979323846264338327";
    cin>>t;
    while(t--){
        cin>>n;
        c=0;
        for(int i = 0; i < n.length(); i++){
            if(n[i]==p[i]) c++;
            else break;
        }
        cout<<c<<endl;
    }
 
    return 0;
}
