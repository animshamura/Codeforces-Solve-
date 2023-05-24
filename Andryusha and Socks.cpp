#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,x;
    cin>>t;
    int pair [t];
    for(int i = 0; i < t; i++) pair[i]=0;
    int count = 0,socks=0;
    for(int i = 0; i < 2*t; i++){
         cin>>x;
         count+=(pair[x]++%2)?-1:1;
         socks=max(socks,count);
    }
    cout<<socks<<endl;
    return 0;
}
