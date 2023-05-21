#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   string s;
   int n;
   char ans [] = {'R','L'};
   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
   cin>>s>>n;
   int k = (int)s[1];
   cout<<ans[(k+n)%2]<<endl;
    return 0;
}
