#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, n, m;
  cin>>t;
  while(t--){
    vector<int> s;
    cin>>n;
    n*=2;
    while(n--){
      cin>>m;
      if(!(find(s.begin(), s.end(), m)!=s.end()))
        s.push_back(m);
    }
    for(int x : s) cout<<x<<" ";
    cout<<endl;
  }
  return 0;
}
