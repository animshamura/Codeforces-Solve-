#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t,n,size;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>s;
        set<char> a;
        int v [n];
        for(int i = n-1; i > -1; i-- ){
            a.insert(s[i]);
            v[i]= (int)a.size();
        }
        a.clear();
        size=0;
        for(int i = 0; i < n-1; i++ ){
            a.insert(s[i]);
            size=max(size,(int)a.size()+v[i+1]);
        }
        cout<<size<<endl;
    }
 
    return 0;
}
