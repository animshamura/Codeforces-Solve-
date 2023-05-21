#include <iostream>
using namespace std;
int main(){    
     long long t,x,sum;
     cin >>t;
     while(t--) {
         cin>>x;
         if(x%2050) cout<<-1<<endl;
         else {
             x = x/2050;
             sum = x%10;
             while(x/=10) { sum+=x%10;}
             cout<<sum<<endl;
         }
     }
    return 0;
}
