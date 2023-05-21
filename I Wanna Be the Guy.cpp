#include <iostream>
#include <set>
using namespace std;
int main() {
    int t,l,p,k;
    set< int, greater<int>> s;
    cin>>t>>l;
    for(int i = 1; i<=l;i++) cin>>k, s.insert(k);
    cin>>p;
    for(int i = 1; i<=p;i++) cin>>k, s.insert(k);
    if(s.size()==t) cout<<"I become the guy.\n";
    else cout<<"Oh, my keyboard!\n";
    return 0;
}
