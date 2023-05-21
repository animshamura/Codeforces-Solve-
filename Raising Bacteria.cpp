#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   long long int  t,x=0;
   cin>>t;
   string b = std::bitset<64>(t).to_string();
   for(int i = 0; i < b.length(); i++) if(b[i]=='1') x++;
 
   cout<<x<<endl;
 
    return 0;
}
