#include <iostream>
using namespace std;
int main(){
  int n; 
  cin>>n;
  cout<<3*n+4<<"\n";
  printf("%d %d\n",0,0);
  for(int i = 0; i < n+1;i++) 
    printf("%d %d\n%d %d\n%d %d\n",i+1,i+1,i,i+1,i+1,i);
  return 0;
}
