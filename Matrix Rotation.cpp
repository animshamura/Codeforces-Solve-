#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t,a1,a2,a3,a4;
    cin>>t;
    while(t--){
        cin>>a1>>a2>>a3>>a4;
       cout<<((a1>a2^a3<a4 && a1>a3^a2<a4)?"YES":"NO")<<endl;
    }
    return 0;
}
