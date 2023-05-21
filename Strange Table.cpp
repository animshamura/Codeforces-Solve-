#include <iostream>
using namespace std;
int main(){    
     long long t,m,n,x;
     cin >> t;
     while(t--) {
         cin>>n>>m>>x;
         if(n==1&&m==1) cout<<1<<endl;
         else cout<<m*((x-1)%n)+(x+n-1)/n<<endl;
     }
    return 0;
}
