#include <iostream>
 
using namespace std;
 
int main()
{
   int t,l,max=0,c=0;
   string s;
   cin>>t>>l;
   while(l--){
       cin>>s;
       if(s.find('0')!=-1) max=(max>++c)?max:c;
       else c=0;
   }
  cout<<max<<endl;
    return 0;
}
