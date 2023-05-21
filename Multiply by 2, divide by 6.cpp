#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main() {
  int t,x,count,i,point;
  cin>>t;
  while(t--){
    cin>>x;
    if(x==1) cout<<0<<endl;
    else if(x==2) cout<<-1<<endl;
    else {
      count=0,point=0;
       while(x>1){
         if(x%6==0){
            x/=6;
            point=0;
         }
         else if(point==1) break;
         else {
          x*=2;
          point=1;
         }
          count++;
    }
    if(x==1) cout<<count<<endl;
    else cout<<-1<<endl;
  }
  }
  return 0;
}
