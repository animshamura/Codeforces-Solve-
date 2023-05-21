#include <iostream>
using namespace std;
int main() {
long long k,w,n,sum;
cin>>k>>w>>n;
sum=k*((n*(n+1))/2);
if(sum-w<0) cout<<0<<endl;
else cout<<sum-w<<endl;
return 0;
}
