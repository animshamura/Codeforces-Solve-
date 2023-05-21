#include <iostream>
 
using namespace std;
 
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a [n];
        int c= 2,sum=0;
        for(int i = 0; i < n; i++) {
            cin>>a[i];
            if(i!=0 && c> a[i]+a[i-1]) c= a[i]+a[i-1];
            sum+=a[i];
        }
        
        cout<<sum-2*c<<endl;
    }
    
