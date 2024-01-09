#include<bits/stdc++.h>
using namespace std; 
int main()  {
    int t; 
    string s; 
    cin>>t;
    while(t--){
        cin>>s;
        int i=1;
        while(i <= 8){ if(s[1]-48!=i) cout<<s[0]<<i<<endl; i++; }
        i=1;
        while(i<= 8) { if(s[0]!=96+i) cout<<(char)(96+i)<<s[1]<<endl; i++;}
    }
}
