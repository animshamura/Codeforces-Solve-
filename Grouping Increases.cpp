
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t, n, i, x, y,c;
   cin>>t;
   while(t--){
       cin>>n;
       x=y=n;
       c=0;
       while(n--){
         cin>>i;
         if(x>y) swap(x,y);
         if(i<=x) x=i;
         else if(i<=y) y=i;
         else x=i, c++; 
       }
         cout<<c<<endl;
   }

    return 0;
}
