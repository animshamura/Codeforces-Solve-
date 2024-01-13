#include <bits/stdc++.h>
#define ll long long int
using namespace std; 
int main()
{
  ll t, n, a, k, l, r; 
  cin>>t;
  while(t--){
      cin>>n;
      l=0; r=2e9;
      vector<ll> con; 
      while(n--){
          cin>>a>>k;
          if(a==3) con.push_back(k);
          else if(a==1) l = max(l,k);
          else if(a==2) r = min(r,k);
      }
      ll ans = r-l+1;
      for(ll c : con) if(c>=l && c<=r) ans--;
      ans=(ans<0)?0:ans;
      cout<<ans<<endl;
  }
  return 0; 
}
